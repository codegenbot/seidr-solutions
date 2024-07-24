Here is the solution:

double diceGame(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0;

    for (int i = m + 1; i <= n; i++) {
        peterWins += (double)i / total;
    }

    return peterWins;
}