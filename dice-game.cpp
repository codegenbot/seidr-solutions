double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i < n && i <= m; i++) {
        total += (n - i) * (1.0 / (n * m));
    }
    return total;
}