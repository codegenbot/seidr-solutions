double diceGame(int n, int m) {
    double total = 1.0 * (n * m);
    double win = 0.0;
    
    for(int i = 1; i <= min(n, m); i++) {
        if(i < m) {
            win += (1.0 * (n - i)) / total;
        } else {
            win += (n - m + 1) / total;
        }
    }
    
    return win;
}