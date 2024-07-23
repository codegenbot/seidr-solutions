double diceGame(int n, int m) {
    double total = (n * m);
    double prob = 0;
    for(int i = 1; i <= n - 1; i++) {
        prob += (m - i + 1) / (total);
    }
    return prob;
}