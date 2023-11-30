int multiply(int a, int b) {
    int unit1 = abs(a % 10); // get the unit digit of a
    int unit2 = abs(b % 10); // get the unit digit of b
    return unit1 * unit2; // return the product of the unit digits
}