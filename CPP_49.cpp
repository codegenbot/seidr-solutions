int modp(int n, int p) {
    if (p == 0) return -1;
    if (n == 0) return 1;

    long long res = 1;
    long long base = 2;
    n = n % (p - 1);

    while (n > 0) {
        if (n % 2 == 1) res = (res * base) % p;
        base = (base * base) % p;
        n /= 2;
    }

    return int(res);
}