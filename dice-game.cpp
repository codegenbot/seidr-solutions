double probability(int n, int m) {
    double result = 0.0;
    for(int i = 1; i < m; ++i) {
        result += (n - m + 1.0) / ((double)n * m);
    }
    return result;
}