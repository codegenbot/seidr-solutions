Here is the solution:

double diceGame(int n, int m) {
    double total = (n + m);
    double p = 1.0;
    for (int i = 1; i <= m && i < n; ++i) {
        p += (m - i + 1.0) / total;
    }
    return p;
}