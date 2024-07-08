double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < m; i++) {
        total += pow(m, -1);
        for (int j = i + 1; j < n; j++) {
            total += pow(n, -1) * pow(m, -1);
        }
    }
    return total;
}