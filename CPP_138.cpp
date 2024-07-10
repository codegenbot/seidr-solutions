bool is_equal_to_sum_even(int n) {
    int sum = 0;
    int original_n = n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum == original_n;
}