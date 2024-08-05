double diceGame(int n, int m) {
    double totalWays = n * m;
    double waysPeterWins = (n - 1) * m;
    return waysPeterWins / totalWays;
}