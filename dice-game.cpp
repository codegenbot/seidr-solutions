double diceGame(int n, int m) {
    double p = 0;
    for (int i = 1; i < m; i++) {
        p += (1.0 / m) * (1.0 / (n - i));
    }
    return p;
}