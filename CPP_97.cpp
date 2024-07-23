Here is the completed code:

int multiply(int a, int b){
    int unit_digit_a = a % 10;
    int unit_digit_b = b % 10;
    return unit_digit_a * unit_digit_b;
}