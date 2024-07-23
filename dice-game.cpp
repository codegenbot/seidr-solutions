double probability(int n, int m) {
    double total = (n + m - 1);
    double peterWins = 0;
    
    for(int i = m+1; i <= n; i++) {
        peterWins += 1.0 / (double)i;
    }
    
    return peterWins;
}