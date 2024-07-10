double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = m+1; i <= n; i++) {
        total += 1.0 / (m * 1.0);
    }
    return total;
}