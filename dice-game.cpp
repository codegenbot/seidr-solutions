double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n && i <= m; i++) {
        if(i > m)total += 1.0 / m;
    }
    return total;
}