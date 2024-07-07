double diceGame(int n, int m) {
    double p = 0;
    for (int i = 1; i < m; i++) {
        p += (i / (double)n) * ((m - i - 1) / (double)m);
    }
    return 1 - p;
}