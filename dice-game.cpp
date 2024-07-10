double probability(int n, int m) {
    double total = (double)(n*m);
    double peterWins = (double)n - ((double)n / total) * m;
    if(peterWins < 0)
        return 0.0;
    else
        return peterWins;
}