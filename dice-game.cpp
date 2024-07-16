double probability(int n, int m) {
    double total = 1.0;
    for (int i = m + 1; i <= n; i++) {
        total += (n - i) / (n * m);
    }
    return total;
}