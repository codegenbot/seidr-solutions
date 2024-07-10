Here is the solution:

double calculateProbability(int n, int m) {
    double total = (long long)n * m;
    double count = 0;

    for (int i = 1; i <= n && i < m; i++) {
        count += m - i;
    }

    return count / total;
}