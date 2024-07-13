double diceGame(int n, int m) {
    double total = 0;
    
    for (int i = 1; i <= n - 1; i++) { 
        for (int j = 1; j <= m && j < i; j++) { 
            total += 1.0 / (n * m); // add the probability when Peter's roll is greater than Colin's
        }
    }
    
    return total;
}