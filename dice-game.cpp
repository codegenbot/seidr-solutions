```cpp
double probability(int n, int m) {
    double total = (m + 1) / (n * m);
    for (int i = 1; i <= m && i < n; i++) {
        total += (m - i + 1) / (n * m);
    }
    return total;
}