int modp(int n, int p) {
    if (p == 1) return 0;
    int result = 1;
    n = n % p;
    while (p > 0) {
        if (p % 2 == 1) {
            result = (result * n) % p;
        }
        p = p / 2;
        n = (n * n) % p;
    }
    return result;
}