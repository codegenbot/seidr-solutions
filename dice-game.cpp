double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m; i++) { 
        double peterWinsThisRound = 0;
        for (int j = i + 1; j <= n; j++) { 
            peterWinsThisRound += 1.0 / n; 
        }
        sum += peterWinsThisRound; 
    }
    return sum;
}