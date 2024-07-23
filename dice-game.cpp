double probability(int n, int m) {
    double total = (n + m - 1);
    return min(n-1.0, m-1.0) / total;
}