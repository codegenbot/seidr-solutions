double diceGame(int n, int m) {
    double total = (double)n * m;
    return (n - 1) * m / total + (m - 1) * n / total;
}