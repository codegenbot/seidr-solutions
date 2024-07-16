double probability(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= m && i < n; i++) {
        total += pow(m, i) / pow(n * m, i);
    }
    return total;
}