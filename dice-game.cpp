double probability(int n, int m) {
    if (n <= m) return 0.0;
    double total = static_cast<double>(n * m);
    double count = 0.0;
    for (int i = m + 1; i < n; ++i) {
        count += static_cast<double>(m);
    }
    count += static_cast<double>(n - m);
    return count / total;
}