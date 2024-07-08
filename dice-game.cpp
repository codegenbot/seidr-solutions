double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i < n; i++) {
        total += pow(m, i) / pow(m, n);
    }
    return total;
}