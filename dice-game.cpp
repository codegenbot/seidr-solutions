double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = n; i < m + n; i++) {
        total += (m - (i % m)) / (n * m);
    }
    return total;
}