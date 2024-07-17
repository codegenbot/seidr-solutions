Here is the solution:

double diceGame(int n, int m) {
    double p = 0;
    for (int i = n + 1; i <= m; i++) {
        p += 1.0 / m;
    }
    return p;
}