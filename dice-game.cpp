double diceGame(int n, int m) {
    double total = (n * m);
    double peterWins = 0;
    
    for(int i=1; i<n; i++) {
        for(int j=1; j<m; j++) {
            if(i > j) {
                peterWins++;
            }
        }
    }
    
    return peterWins / total;
}