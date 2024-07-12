double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i < m; i++) {
        sum += 1.0 / n;
    }
    for (int j = m; j <= n; j++) {
        sum += 1.0 / m;
    }
    return sum;
}