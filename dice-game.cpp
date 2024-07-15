double diceGame(int n, int m) {
    double totalPossibleRolls = n * m;
    double peterWins = 1.0; // Peter wins when he rolls a value strictly higher than Colin's roll
    for (int i = 1; i < n; i++) {
        peterWins += (n - i) * (m / (double)(totalPossibleRolls));
    }
    return peterWins;
}