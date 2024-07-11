double getProbability(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= m && j < i; j++) {
            favorableOutcomes++;
        }
    }
    return 1.0 * favorableOutcomes / totalOutcomes;
}