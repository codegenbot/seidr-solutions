double diceGame(int n, int m) {
    double total = (double)(n * m);
    double p1 = (n - 1) / (double)n;
    double p2 = m / (double)(n * m);
    return 1 - p1 - p2 + p1 * p2;
}