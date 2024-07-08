double diceGame(int n, int m) {
    double prob = 0.0;
    for (int i = 1; i <= min(n, m); i++) {
        if (n > m) prob += (1.0 / n);
        else if (i < m) prob += (1.0 / m);
    }
    return prob;
}