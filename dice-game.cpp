```cpp
double probability(int n, int m) {
    double total = (m - 1) / (n * m);
    for (int i = m + 1; i <= n; i++) {
        total += 1.0 / n;
    }
    return total;
}