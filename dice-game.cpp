double getProbability(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= m; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            total += (double)1 / (n * m);
        }
    }
    return total;
}