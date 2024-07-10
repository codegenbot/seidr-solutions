bool is_equal_to_sum_even(int n) {
    int sum = 0;
    int original_n = n;
    int position = 1;
    
    if (n <= 0) {
        return false;
    }
    
    while (position <= original_n) {
        sum += n % 10;
        n /= 10;
        position++;
    }
    
    return sum == 2 * original_n && original_n % 2 == 0;
}