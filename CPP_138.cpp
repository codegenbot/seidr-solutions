bool is_equal_to_sum_even(int n) {
    int sum = 0;
    int original_n = n;
    
    if (n <= 0) {
        return false;
    }
    
    while (n > 0) {
        if ((n % 10) % 2 == 0) {
            sum += n % 10;
        }
        n /= 10;
    }
    
    return sum % 2 == 0 && sum == 2 * original_n && original_n % 2 == 0;
}