Here is the solution:

double probability(int n, int m) {
    double sum = 0.0;
    for (int i = 1; i <= n && i < m; i++) {
        sum += 1.0 / m;
    }
    if (m > n) {
        for (int i = m; i >= n + 1; i--) {
            sum += 1.0 / m;
        }
    }
    return sum;
}