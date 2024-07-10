int modp(int n, int p) {
    if (n < 0)
        n = p - (-n % p);
    return pow(n, p);
}