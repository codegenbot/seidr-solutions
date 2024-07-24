Here is the solution:

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m && i < n; i++) {
        total += 1.0 / n;
    }
    return total;
}