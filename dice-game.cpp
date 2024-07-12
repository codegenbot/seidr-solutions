double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        total += pow(m, 1.0) / (n * m);
    }
    return total;