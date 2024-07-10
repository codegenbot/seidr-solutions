long long modp(int n, int p) {
    if (n < p)
        return 1;
    else {
        if (n % 2 == 0)
            return ((modp(n / 2, p)) * (modp(n / 2, p))) % p;
        else
            return (((long long)n) * (modp((n - 1) / 2, p)) * (modp((n - 1) / 2, p))) % p;
    }
}