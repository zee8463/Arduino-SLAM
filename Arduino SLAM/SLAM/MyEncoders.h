// #ifndef _MY_ENCODERS_
// #define _MY_ENCODERS_

// #include <Wire.h>
// #include <Servo.h>
// #include <PinChangeInt.h>

// #define ENCODER_PORT_A 10
// #define ENCODER_PORT_B 11

// volatile unsigned long lEncCount = 0;
// volatile unsigned long rEncCount = 0;
// volatile unsigned long lEncLast = 0;
// volatile unsigned long rEncLast = 0;

// unsigned long LOld, LNew, ROld, RNew;
// int lEncPin = 10;
// int rEncPin = 11;

// //this function sets the tick counts to 0
// void resetCounts() {
//     noInterrupts();
//     lEncCount = 0;
//     rEncCount = 0;
//     interrupts();
// }

// //this function should return the left and right tickcounts
// //since either the start of the program or the last
// //call to the function resetCounts()
// void getCounts(int counts[]) {
//     noInterrupts();
//     counts[0] = lEncCount;
//     counts[1] = rEncCount;
//     interrupts();
// }

// //this function should return the instantaneous speeds of the wheels
// //meassured in revolutions per second. uses timestamps and not the counts of the encoder
// void getSpeeds(float speeds[]) {
//     noInterrupts();                             // disable interrupts
//     unsigned long LeftOld = LOld;               // copying global variables to local variables
//     unsigned long LeftNew = LNew;
//     unsigned long RightOld = ROld;
//     unsigned long RightNew = RNew;
//     interrupts();                               // re-enable interrups

//     unsigned long lDelta = LeftNew - LeftOld;   // use local variables to calculate speed
//     unsigned long rDelta = RightNew - RightOld;
//     unsigned long currentTime = millis();

//     unsigned long rDeltaNew = currentTime - RightNew;
//     unsigned long lDeltaNew = currentTime - LeftNew;

//     if (rDeltaNew > rDelta) {
//         rDelta = rDeltaNew;
//     }
//     if (lDeltaNew > lDelta) {
//         lDelta = lDeltaNew;
//     }
//     speeds[0] = (1.0 / 32.0) * (1000 / lDelta);
//     speeds[1] = (1.0 / 32.0) * (1000 / rDelta);
// }

// void leftInterrupt() {      //left interrupt
//     LOld = LNew;
//     LNew = millis();
//     lEncCount++;
// }

// void rightInterrupt() {     //right interrupt
//     ROld = RNew;
//     RNew = millis();
//     rEncCount++;
// }

// //this function should include whatever code necessary to initialize this module
// void initEncoders() {
//     pinMode(lEncPin, INPUT_PULLUP);
//     pinMode(rEncPin, INPUT_PULLUP);

//     PCintPort::attachInterrupt(ENCODER_PORT_A, &leftInterrupt, FALLING);
//     PCintPort::attachInterrupt(ENCODER_PORT_B, &rightInterrupt, FALLING);
// }

// #endif //_MY_ENCODERS_

