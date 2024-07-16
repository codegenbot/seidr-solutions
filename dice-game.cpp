```
double probability(int n, int m) {
    double total = (n - 1) * 1.0 / (n * m);
    for (int i = 1; i <= m && i < n; i++) {
        total += (m - i + 1) * 1.0 / (n * m);
    }
    return total;
}