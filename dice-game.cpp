double diceGame(int n, int m) {
    double p = 0.0;
    
    for (int i = m+1; i <= n; i++) {
        p += ((double)1 / (n*m));
    }
    return p;
}