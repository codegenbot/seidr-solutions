double diceGame(int n, int m) {
    double totalCombinations = (double)n*m;
    double petersWins = (n-1)*m + n*(m-1);
    return petersWins/totalCombinations;
}