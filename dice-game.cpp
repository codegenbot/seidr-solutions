double diceGame(int n, int m) {
    double totalOutcomes = (long long)n * m;
    double outcomesWherePeterWins = (n - 1) * m;
    return outcomesWherePeterWins / totalOutcomes;
}