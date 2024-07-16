double probability(int n, int m) {
    double total = 0.0;
    double peterRolls = (n - m) * 1.0 / n;
    
    for (int i = 1; i <= m && i < n; i++) {
        total += (i - m) * 1.0 / (n * m);
    }
    
    return total + peterRolls;
}