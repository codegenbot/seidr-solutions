double getProbability(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = (m - 1) * n + min(n, m - 1);
    return favorableOutcomes / totalOutcomes;
}