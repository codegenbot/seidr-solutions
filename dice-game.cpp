double diceGame(int n, int m) {
    double total = (n * 1.0 + m * 1.0);
    double peterWins = 0;
    
    for(int i = m+1; i <= n; i++) {
        peterWins += 1 / (n * 1.0);
    }
    
    return peterWins / total;
}