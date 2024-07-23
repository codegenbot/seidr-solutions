double probability(int n, int m) {
    double total = (n + m - 1);
    double petersWin = (double)n / total;
    double colinsWin = (double)m / total;
    
    return petersWin;
}