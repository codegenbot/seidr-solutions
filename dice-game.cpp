double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        total += (n - i) * (m - 1) / (n * m);
    }
    return total;
}