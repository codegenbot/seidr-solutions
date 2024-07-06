int multiply(int a, int b){
    int last_digit_a = a % 10;
    int last_digit_b = b % 10;
    return last_digit_a * last_digit_b;
}