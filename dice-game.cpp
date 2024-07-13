double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    // Count all cases where Peter's die roll is greater than or equal to Colin's
    for (int i = m; i <= n; i++) {
        p += (i > 1.0 / total) ? 1.0 : 0.0;
    }

    return p;
}