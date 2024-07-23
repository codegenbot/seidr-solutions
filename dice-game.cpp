double probability(int n, int m) {
    double total = (n + m - 1);
    double petersWin = 0;
    
    for(int i = m; i < n; i++) {
        petersWin += (double)(i - m + 1) / total;
    }
    
    return petersWin;
}