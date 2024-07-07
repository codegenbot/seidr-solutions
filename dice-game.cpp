double diceGame(int n, int m) {
    double p = 0;
    for (int i = 1; i < m; i++) {
        p += (n - i) * (1.0 / n) * (1.0 / m);
    }
    return p;
}