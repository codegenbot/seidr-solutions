```
double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i < m; i++) {
        sum += (n - i) * (1.0 / (m * n));
    }
    for (int j = m + 1; j <= n; j++) {
        sum += 1.0 / (m * n);
    }
    return sum;
}