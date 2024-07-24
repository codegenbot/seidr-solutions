Here is the solution:

double probability(int n, int m) {
    double totalPossibilities = 1e6; // assume both dice have 1e6 sides (it's enough for this problem)
    int peterWins = 0;
    
    for (int i = n + 1; i <= m; i++) {
        peterWins += i - n;
    }
    
    return (double) peterWins / totalPossibilities;
}