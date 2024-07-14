double probability(int n, int m) {
    if (n <= m) return 0.0;
    double total = static_cast<double>(n * m);
    double p = 0.0;
    for (int i = m + 1; i <= n; ++i) {
        p += static_cast<double>(m) * (n - i);
    }
    return p / total;
}