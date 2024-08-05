double diceGame(int n, int m) {
    double totalPossibilities = n * m;
    double peterWins = 0;

    for (int i = n; i <= m; i++) {
        peterWins += 1.0 / i;
    }

    return peterWins / totalPossibilities;
}