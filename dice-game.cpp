double probability(int n, int m) {
    double total = 0;
    double peterProbability = 1.0 / n;
    for (int i = 1; i <= m && i < n; i++) {
        total += peterProbability;
    }
    return total;
}