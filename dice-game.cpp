double probability(int n, int m) {
    double total = 1.0 * (n + m - 1);
    return 1.0 / total * min(n, m);
}