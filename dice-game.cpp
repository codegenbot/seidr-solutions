Here is the solution:

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= n; j++) {
            total += 1.0 / (n * m);
        }
    }
    return 1.0 - total;
}