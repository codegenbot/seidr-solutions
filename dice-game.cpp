```cpp
double getProbability(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = (n - 1) * m;
    return 1.0 * favorableOutcomes / totalOutcomes;
}