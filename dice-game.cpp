double diceGame(int n, int m) {
    double totalOutcomes = n * m;
    double peterWins = (n - 1) * (m);
    
    return 1.0 - (peterWins / totalOutcomes);