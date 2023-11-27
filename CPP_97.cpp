int multiply(int a, int b) {
    int unitDigitA = abs(a % 10);
    int unitDigitB = abs(b % 10);
    
    return unitDigitA * unitDigitB;
}