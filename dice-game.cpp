double diceGame(int n, int m) {
    if (n < m) return 0.0;
    double p = 1.0;
    for (int i = 1; i <= m - 1; i++) {
        p *= 1.0 * (n - i) / n;
    }
    return p;
}