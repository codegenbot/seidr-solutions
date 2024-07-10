Here is the solution:

double getProbability(int n, int m) {
    if (n > m) return 1.0;
    if (n < m) return 0.0;

    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        total += 1.0 / n;
    }
    return 1.0 - total;
}