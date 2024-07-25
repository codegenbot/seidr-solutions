int multiply(int a, int b) {
    int unit_a = a % 10;
    int unit_b = abs(b) % 10; // Use abs to handle negative numbers
    return unit_a * unit_b;
}