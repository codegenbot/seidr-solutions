double probability(int n, int m) {
    double total = (n + m - 1) * (n + m);
    return ((m - 1.0) / (n + m - 1)) * (n - 1);
}