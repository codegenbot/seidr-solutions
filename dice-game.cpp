double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        total += 1.0 / ((double)n);
    }
    return 1.0 - total;
}