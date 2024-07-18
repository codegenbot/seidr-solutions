int multiply(int a, int b){
    int unit_digit_a = abs(a) % 10;
    int unit_digit_b = abs(b) % 10;
    return unit_digit_a * unit_digit_b;
}