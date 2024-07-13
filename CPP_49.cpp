int modp(int n, int p) {
    if (n < 0) {
        n = n % p;
        if (n < 0)
            n += p;
    }
    return pow(n, p);
}