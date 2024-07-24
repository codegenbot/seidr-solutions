Here is the solution:

double probability(int n, int m) {
    double p = 0.0;
    for (int i = 1; i <= m; i++) {
        p += (double)(n - i + 1) / n * (1.0 / m);
    }
    return p;
}