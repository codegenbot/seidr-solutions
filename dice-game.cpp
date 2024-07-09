double probability(int n, int m) {
    double total = (n + m - 1);
    return (m < n ? m : n - 1) / (total == 0 ? 1 : total);
}