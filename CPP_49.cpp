int modp(int n, int p) {
    int result = 1;
    n = n % p;
    if (n == 0) {
        return result;
    }
    while (p > 0) {
        if (p % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
        p = p / 2;
    }
    return result;
}