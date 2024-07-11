int modp(int n, int p) {
    if (n < 0)
        return modp(-n, p);
    long long res = 1;
    for (; n; n >>= 1) {
        if (n & 1)
            res = (long long)res * p % p;
        p = (long long)p * p % p;
    }
    return res;
}