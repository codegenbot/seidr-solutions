Here is the solution:

double probability(int n, int m) {
    double total = (double)n * m;
    double higher = 0;

    for (int i = 1; i <= n && i < m; i++) {
        higher += (double)m - i;
    }

    return higher / total;
}