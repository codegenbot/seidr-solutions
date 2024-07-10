Here is the solution:

double diceGame(int n, int m) {
    double p = 0.0;
    for (int i = 1; i < n; i++) {
        p += 1.0 / n * (1.0 - (i + 1) / (m * 1.0));
    }
    return p;
}