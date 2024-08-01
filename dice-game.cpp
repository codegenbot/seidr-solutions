double diceGame(int n, int m) {
    double total = (double)n * m;
    double p1 = 0;
    double p2 = 0;

    for (int i = 1; i <= n - 1; i++) {
        p1 += (double)1 / n;
    }

    for (int j = 1; j < m; j++) {
        p2 += (double)1 / m;
    }

    return p1 + p2;
}