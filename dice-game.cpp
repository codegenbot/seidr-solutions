Here is the solution:

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (j <= m) {
                sum += 1.0 / (n * m);
            }
        }
    }
    return sum;
}