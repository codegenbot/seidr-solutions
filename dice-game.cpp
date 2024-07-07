double diceGame(int n, int m) {
    double p = 0;
    for (int i = 1; i < m; i++) {
        p += (1.0 / n) * (m - i) / m;
    }
    for (int i = m + 1; i <= n; i++) {
        p += (1.0 / n) * (1.0 / m);
    }
    return p;
}