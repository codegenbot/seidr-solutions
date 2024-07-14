Here is the solution:

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        total += pow((n - i + 1), 2);
    }
    return total / (n * m);
}