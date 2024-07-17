Here is the solution:

double getProbability(int n, int m) {
    double totalPossibleOutcomes = (double)n * (double)m;
    double peterWins = 0;

    for (int i = m + 1; i <= n; i++) {
        peterWins += (double)(n - i + 1) / totalPossibleOutcomes;
    }

    return peterWins;
}