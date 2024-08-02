int modp(int n, int p) {
    if (n < 0)
        return modp(-n, p);
    if (n == 0)
        return 1;
    long long res = 1;
    for (; n > 0; n >>= 1) {
        if ((n & 1) != 0)
            res = (long long)res * p % p;
        p = (long long)p * p % p;
    }
    return res;
}