double diceGame(int n, int m) {
    double totalOutcomes = n * m;
    double petersWins = 0;

    for (int i = n; i <= m; i++) {
        petersWins += 1.0 / i;
    }

    return petersWins / totalOutcomes;
}