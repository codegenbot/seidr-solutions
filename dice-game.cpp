double diceGame(int n, int m) {
    double probability = 0.0;
    
    for (int i = 1; i <= m; i++) {
        if (i < n) 
            probability += (n - i) / (double)(n * m);
    }
    
    return probability;
}