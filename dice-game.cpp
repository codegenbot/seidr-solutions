double diceGame(int n, int m) {
    double total = (double)n * m;
    return 1.0 - ((n - 1) / n + (m - 1) / m) / total;
}