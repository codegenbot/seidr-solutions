double probability(int n, int m) {
    double total = 0.0;
    double peterSuccessProbability = 1.0 / (n - m);
    for (int i = 1; i < m; i++) {
        total += peterSuccessProbability;
    }
    return total;
}