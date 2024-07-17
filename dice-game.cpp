Here is the solution:

double getProbability(int n, int m) {
    double p = 0;
    for (int i = 1; i <= n && i < m; i++) {
        p += 1.0 / n;
    }
    return p;
}