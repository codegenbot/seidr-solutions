```cpp
double getProbability(int n, int m) {
    double totalCombinations = 1.0 * (n + m - 2);
    double favorableOutcomes = 1.0 * (n - 1);

    return 1.0 * favorableOutcomes / totalCombinations;
}