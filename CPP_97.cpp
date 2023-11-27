int multiply(int a, int b) {
    int unitA = abs(a % 10); // get the unit digit of a
    int unitB = abs(b % 10); // get the unit digit of b
    return unitA * unitB; // return the product of the unit digits
}