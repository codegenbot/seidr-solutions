int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    while (n > 0) {
        if (n % 2 == 1)
            res = (long long)res * p % p;
        n /= 2;
        p = (long long)p * p % p;
    }
    return res;
}