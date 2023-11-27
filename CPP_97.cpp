int multiply(int a, int b) {
    int unit_a = abs(a) % 10;
    int unit_b = abs(b) % 10;
    int product = unit_a * unit_b;
    return product;
}