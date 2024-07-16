double probability(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= m && i < n; i++) {
        total += (n - i) * (1.0 / n) / (m - i + 1);
    }
    return total;
}