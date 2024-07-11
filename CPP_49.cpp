int modp(int n, int p) {
    if (n < 0)
        return modp(-n, p);
    long long res = 1;
    for (; p; p >>= 1) {
        if (p & 1)
            res = (long long)res * n % p;
        n = (long long)n * n % p;
    }
    return res % p;
}