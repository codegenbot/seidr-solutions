double diceGame(int n, int m) {
    double total = 0;
    
    for (int i = 1; i < m; i++) { 
        total += (double)(n - i) / (n * m);
    }
    
    return total;
}