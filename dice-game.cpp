Here is the solution:

double probability(int n, int m) {
    double total = (n + m - 1);
    double peterWins = 0;
    
    for (int i = m; i <= n - 1; i++) {
        peterWins += 1.0 / total;
    }
    
    return peterWins;
}