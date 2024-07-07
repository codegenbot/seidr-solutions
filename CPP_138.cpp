bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n / 2; i += 2) {
        int sum = 0;
        for (int j = 2; j <= n / 2; j += 2) {
            if (i + j > n) break;
            sum += i + j;
            if (sum == n) return true;
        }
    }
    return false;
}