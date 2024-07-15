```c
double diceGame(int n, int m) {
    double totalPossibilities = n * m;
    double peterWins = 0;

    for(int i = 1; i <= n - 1; i++) {
        for(int j = 1; j <= m; j++) {
            if(i > j) {
                peterWins++;
            }
        }
    }

    return peterWins / totalPossibilities;
}