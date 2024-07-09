double probability(int n, int m) {
    double total = (n * m) - ((n + m) - 1);
    return (m - 1.0) / total;
}