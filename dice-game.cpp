double probability(int n, int m) {
    double total = (m + 1.0) / n;
    for (int i = m + 2; i <= n; i++) {
        total += 1.0 / n;
    }
    return 1 - total;
}