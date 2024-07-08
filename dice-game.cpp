double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i < n; i++) {
        total += 1.0 / m;
    }
    for (int j = 1; j < m; j++) {
        total -= 1.0 / m;
    }
    return total;
}