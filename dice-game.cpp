double getProbability(int n, int m) {
    double p = 0.0;
    for (int i = m + 1; i <= n; i++) {
        p += (n - i) * (1.0 / (m * n));
    }
    return p;
}