double probability(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n && i <= m; i++) {
        total += (n - i) / (n * m);
    }
    return total;
}