```
double probability(int n, int m) {
    double total = 0;
    for (int i = m + 1; i <= n; i++) {
        total += (n - i + 1) / (double)n * (m + 1);
    }
    return total;
}