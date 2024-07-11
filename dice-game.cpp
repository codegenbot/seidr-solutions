```
double getProbability(int n, int m) {
    double totalOutcomes = (long long)n * m;
    double favorableOutcomes = (n - 1) * m + n * (m - 1);
    return 1.0 * favorableOutcomes / totalOutcomes;
}