bool is_equal_to_sum_even(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return (sum % 2 == 0);
}