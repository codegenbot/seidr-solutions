Here is the solution:

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (n - i + 1) / (double)n * (m - i) / (double)m;
    }
    return sum;
}