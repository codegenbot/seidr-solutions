double probability(int n, int m) {
    double total = (double)(n + m - 1);
    return (m * 1.0 / total) / (n * 1.0);
}