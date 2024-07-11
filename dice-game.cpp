Here is the solution:

double probability(int n, int m) {
    double count = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i && j <= m; ++j) {
            count += 1.0 / n / m;
        }
    }
    return count;
}