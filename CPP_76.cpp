bool is_simple_power(int x, int n) {
    if (n <= 1) return x == 1; // n must be greater than 1 for proper powers
    if (x <= 0) return false;  // x must be positive
    while (x % n == 0) {
        x /= n;
    }
    return x == 1;
}