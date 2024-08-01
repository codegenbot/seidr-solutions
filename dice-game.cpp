double diceGame(int n, int m) {
    double total = (double)n * m;
    double count = 0;
    
    for(int i = 1; i < n; i++) {
        count += (n - i) / (double)(n * m);
    }
    
    return count;
}