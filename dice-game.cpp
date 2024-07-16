double probability(int n, int m) {
    double total = 0;
    for (int i = m + 1; i <= n; i++) {
        total += (1.0 / n) * (1.0 / m);
    }
    return total;
}