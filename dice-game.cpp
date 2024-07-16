double probability(int n, int m) {
    double total = 0.0;
    for (int i = m + 1; i <= n; i++) {
        total += 1.0 / (n * m);
    }
    return total;
}