double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i < m; i++) {
        sum += (n - m) * 1.0 / (m * n);
    }
    for (int i = m + 1; i <= n; i++) {
        sum += 1.0 / n;
    }
    return sum;
}