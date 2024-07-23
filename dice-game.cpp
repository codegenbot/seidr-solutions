double probability(int n, int m) {
    double p = 0.0;
    for (int i = 1; i < n && i <= m; i++) {
        p += 1.0 / n;
    }
    for (int i = m + 1; i <= n; i++) {
        p += (n - i) * (1.0 / (n * m));
    }
    return p;
}