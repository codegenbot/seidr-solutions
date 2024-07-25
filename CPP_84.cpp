int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

string solve(int N) {
    int digit_sum = sum_digits(N);
    string binary_sum = "";
    while (digit_sum > 0) {
        binary_sum = to_string(digit_sum % 2) + binary_sum;
        digit_sum /= 2;
    }
    return binary_sum;
}