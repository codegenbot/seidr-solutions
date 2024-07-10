bool is_equal_to_sum_even(int n) {
    int sum = 0;
    int original_n = n;
    
    if (n <= 0) {
        return false;
    }
    
    while (original_n > 0) {
        if ((original_n % 10) % 2 == 0) {
            sum += original_n % 10;
        }
        original_n /= 10;
    }
    
    return sum % 2 == 0 && sum == 2 * n && n % 2 == 0;
}