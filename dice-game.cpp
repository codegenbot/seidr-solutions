Here is the solution:

double diceGame(int n, int m) {
    double total = (double)n * m;
    int petersWins = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            if(j > m) break;
            petersWins++;
        }
    }

    return (double)petersWins / total;
}