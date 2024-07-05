double diceGame(int n, int m) {
    double total = (double)(n*m);
    double p = 0.0;
    
    for(int i = max(1, n-m+1); i < n; i++) {
        p += (n-i) / total;
    }
    
    return p;
}