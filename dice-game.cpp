double probability(int n, int m) {
    double total = (n + m - 1);
    double peterWins = 0;
    
    for(int i = m; i < n; i++) {
        peterWins += 1.0 / i;
    }
    
    return peterWins;
}