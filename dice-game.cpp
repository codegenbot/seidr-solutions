```
double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i < m; i++) {
        sum += (n - m + i) * (1.0 / (n * m));
    }
    return sum;
}