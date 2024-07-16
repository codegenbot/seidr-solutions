double probability(int n, int m) {
    double sum = 0;
    for (int i = m + 1; i < m; i++) {
        if (i <= n) {
            sum += (n - i) * (1.0 / n);
        } else {
            sum += 1.0;
        }
    }
    return sum;
}