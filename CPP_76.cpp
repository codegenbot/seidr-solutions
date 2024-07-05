bool is_simple_power(int x, int n) {
    if (x < 1 || n < 1) return false;
    if (x == 1) return true;
    while (x % n == 0) {
        x /= n;
    }
    return x == 1;
}