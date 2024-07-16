double probability(int n, int m) {
    double total = 0;
    for (int i = 1; i < m && i <= n - 1; i++) {
        total += (n - i) * (1.0 / n) * (1.0 / m);
    }
    return total;
}