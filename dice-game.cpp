double diceGame(int n, int m) {
    double totalPossibilities = n * m;
    double peterWins = (n - 1.0) * (m);
    return peterWins / totalPossibilities;
}