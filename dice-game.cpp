```cpp
double getProbability(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = (m - 1) * n + n - 1;
    return favorableOutcomes / totalOutcomes;
}