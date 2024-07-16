double probability(int n, int m) {
    double total = 0;
    for (int i = 1; i <= m && i < n; i++) {
        total += pow(m, i) * pow(1 - 1.0/m, n-i);
    }
    return total;
}