Here is the solution:

double probability(int n, int m) {
    if (n < m)
        return 0.0;
    double total = 1.0 * n * m;
    double p = 0.0;
    for (int i = m + 1; i <= n; i++) {
        p += 1.0 / total;
    }
    return p;
}