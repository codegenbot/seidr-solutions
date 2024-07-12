int multiply(int a, int b){
    int unit_a = a % 10;
    int unit_b = abs(b) % 10; // use abs to handle negative input for b
    return unit_a * unit_b;
}