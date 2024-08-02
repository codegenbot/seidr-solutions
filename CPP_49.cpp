int modp(int n, int p) {
    if (n < 0) {
        n = pow(-1, n) * (pow(p, -1) % p);
    }
    long long result = 1;
    while (n > 0) {
        if (n & 1)
            result = (long long)(result * p) % p;
        n >>= 1;
        p = (long long)p * p % p;
    }
    return result;
}