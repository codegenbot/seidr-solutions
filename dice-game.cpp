double diceGame(int n, int m) {
    double prob = 0.0;
    for (int i = 1; i < n && i <= m; i++) {
        prob += (n - i) * (1.0 / n) / (m + 1);
    }
    return prob;
}