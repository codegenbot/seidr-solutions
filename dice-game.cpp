double probability(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n && i <= m; i++) {
        total += 1.0 / n;
    }
    for (int i = m + 1; i < n; i++) {
        total += (1.0 / m) * (1.0 / n);
    }
    return total;
}