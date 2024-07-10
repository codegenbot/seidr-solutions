double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i < n; i++) {
        total += 1.0 / (n * m);
    }
    return total;
}