int modp(int n, int p) {
    if (n < 0)
        return modp(-n, p);
    long long res = 1;
    for (int i = 0; i < __builtin_clz(n); i++)
        if (!(n & 1))
            n >>= 1;
        else
            res = (long long)res * 2 % p;
    while (n > 1) {
        if (n & 1)
            res = (long long)res * 2 % p;
        n >>= 1;
    }
    return res;
}