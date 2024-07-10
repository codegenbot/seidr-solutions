double probability(int n, int m) {
    double total = (double)(n*m);
    double peterWins = 0.0;
    
    for(int i=1; i<=m-1; i++) {
        peterWins += (double)n / (n+m-1);
    }
    
    return peterWins;
}