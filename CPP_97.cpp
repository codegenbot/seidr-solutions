int multiply(int a, int b) {
    int unitDigitA = abs(a % 10); // get unit digit of a
    int unitDigitB = abs(b % 10); // get unit digit of b
    
    return unitDigitA * unitDigitB; // return the product of their unit digits
}