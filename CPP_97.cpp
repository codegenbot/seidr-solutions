int multiply(int a, int b) {
    int unitDigitA = abs(a) % 10; // get the unit digit of a
    int unitDigitB = abs(b) % 10; // get the unit digit of b
    int product = unitDigitA * unitDigitB; // calculate the product of the unit digits
    return product;
}