Here is the solution:

double diceGame(int n, int m) {
    double total = (n + m);
    double peterWins = 0;
    
    for (int i = 1; i <= m - 1; i++) {
        if (i < n) {
            peterWins += 1.0;
        }
    }

    return peterWins / total;
}