bool is_simple_power(int n, int x) {
    while (n != 1 && x % n == 0) {
        x /= n;
    }
    return x == 1;
}