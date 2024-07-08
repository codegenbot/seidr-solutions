double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i < n && i <= m; i++) {
        total += (n-i)/(double)n*(m-i+1)/(double)m;
    }
    return total;
}