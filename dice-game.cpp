Here is the solution:

double probability(int n, int m) {
    if (n < m) return 0.0;
    double total = (double)n * m;
    double count = 0.0;
    for (int i = 1; i <= n - m; ++i) {
        count += i;
    }
    return count / total;
}