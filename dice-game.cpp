double diceGame(int n, int m) {
    double total = 1.0 * (n * m);
    double win = 0.0;
    
    for(int i = m + 1; i < n; i++) {
        win += (1.0 * (n - i)) / (1.0 * (n * m));
    }
    
    return win;
}