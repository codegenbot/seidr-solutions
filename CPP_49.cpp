int modp(int n, int p) {
    if (n < 0)
        return modp(-n, p);
    if (n == 0)
        return 1;
    if (p % 2 == 0) {
        long long res = modp(n / 2, p);
        return (res * res) % p;
    } else {
        if (n >= p)
            return modp(n - p, p) + n;
        return n;
    }
}