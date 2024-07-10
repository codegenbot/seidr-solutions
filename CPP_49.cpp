long long modp(int n, int p) {
    if (p == 1) return 0;
    long long result = 1LL;
    n = n % p;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    return result;
}