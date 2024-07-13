int modp(int n, int p) {
    if (n < 0) n = ~n + 1; // handle negative input
    int res = 1;
    for (; n > 0; n >>= 1) {
        if (n & 1)
            res = (long long)res * p % p;
        p = (long long)p * p % p;
    }
    return res;
}