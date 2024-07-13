Here is the solution:

double probability(int n, int m) {
    if (n < 1 || m < 1) return -1; // invalid input
    double total = static_cast<double>(n + m);
    double p = 0;
    for (int i = 1; i <= n && i < m; ++i) {
        p += 1.0 / total;
    }
    for (int i = m + 1; i <= n + m; ++i) {
        p += (n - (m - 1)) * 1.0 / total;
    }
    return p;
}