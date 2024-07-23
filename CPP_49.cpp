int modp(int n, int p) {
    if (n < 0)
        return modp(-n, p);
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return modp(n / 2, p) * modp(n / 2, p) % p;
    else
        return n % p;
}