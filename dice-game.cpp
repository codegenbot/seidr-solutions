Here is the solution:

double diceGame(int n, int m) {
    double total = (n + m);
    double peterWins = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            peterWins += 1.0 / total;
        }
    }
    
    return peterWins;
}