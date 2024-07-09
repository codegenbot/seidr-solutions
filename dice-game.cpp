double probability(int n, int m) {
    double total = 1.0; // Initialize total as 1.0
    for (int i = 1; i <= m - 1; i++) {
        total += (n - i) / (n * m);
    }
    return total;
}