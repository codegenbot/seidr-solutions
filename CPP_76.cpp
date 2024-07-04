bool is_simple_power(int x, int n) {
    if (x == 1) return true;
    if (n == 1) return x == 1;
    while (x % n == 0) {
        x /= n;
    }
    return x == 1;
}