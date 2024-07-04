bool is_simple_power(int x, int n) {
    if (n == 1) return x == 1;
    if (x == 1) return true;
    while (x % n == 0) {
        x /= n;
    }
    return x == 1;
}