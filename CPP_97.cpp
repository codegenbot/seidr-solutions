int multiply(int a, int b) {
    int a_without_last_digit = a / 10;
    int b_without_last_digit = b / 10;
    return (a_without_last_digit * b_without_last_digit * 10 + a_without_last_digit * b % 10 + a % 10 * b_without_last_digit);
}