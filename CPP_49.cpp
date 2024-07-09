long long modp(int n, int p) {
    if (n < 0) return modp(-n, p);
    if (n == 0 || p == 1) return 1;
    long long res = 1;
    for (; n; n >>= 1) {
        if (n & 1)
            res = (long long)res * p % p;
        p = (long long)p * p % p;
    }
    return res;
}