double diceGame(int n, int m) {
    double totalOutcomes = n * m;
    double petersWins = (n - m);
    
    if(m > n) {
        double temp = m;
        m = n;
        n = temp;
    }
    
    return petersWins / totalOutcomes;