double diceGame(int n, int m) {
    double total = (double)(n * m);
    double peterWins = 0;
    for (int i = 1; i < n; i++) {
        peterWins += (double)(i * m) / total;
    }
    return peterWins;
}