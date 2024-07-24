double getProbability(int n, int m) {
    double peterWins = 0;
    for (int i = m + 1; i <= n; i++) {
        peterWins += (double)(i - m) / (n * m);
    }
    return peterWins;
}