double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j < i; j++) { 
            total += (n - i + 1) * (j == 1 ? 1 : m) / (n * m);
        }
    }
    return total;
}