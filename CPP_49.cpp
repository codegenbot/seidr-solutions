int modp(int n, int p) {
    if (n < 0) {
        return modp(-n, p);
    }
    long long res = 1;
    while (n > 0) {
        if (n & 1)
            res = (long long)res * p % p;
        n >>= 1;
        p = (long long)p * p % p;
    }
    return res;
}