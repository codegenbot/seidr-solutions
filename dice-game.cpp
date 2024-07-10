double probability(int n, int m) {
    double total = (double)(n*m);
    double peterWins = 0;
    
    for(int i = n; i < n+m; i++) {
        peterWins += 1.0 / m;
    }
    
    return peterWins;
}