Here is the solution:

double diceGame(int n, int m) {
    double total = (double)n * m;
    return 1.0 - ((n - 1) / (double)n) * (m / (double)total);
}