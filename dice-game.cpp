```
double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        if (i < n) {
            total -= 1.0 / m;
        } else if (i == n) {
            total -= 1.0 / m;
        }
    }
    return total;
}