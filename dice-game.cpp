double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i < m && i <= n; i++) {
        sum += 1.0 / m;
    }
    for (int j = m + 1; j <= n; j++) {
        sum += 1.0 / m;
    }
    return sum;
}