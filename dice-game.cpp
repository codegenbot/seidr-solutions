double diceGame(int n, int m) {
    double p = 0;
    
    for (int i = 1; i < min(n, m); i++) {
        p += (n - i) / (n * m);
    } 
    return p;
}