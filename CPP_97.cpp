int multiply(int a, int b) {
    int unitDigitA = abs(a) % 10; // Get the absolute value and calculate the unit digit of a
    int unitDigitB = abs(b) % 10; // Get the absolute value and calculate the unit digit of b
    return unitDigitA * unitDigitB; // Return the product of the unit digits
}