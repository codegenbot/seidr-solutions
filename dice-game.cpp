```cpp
double probability(int n, int m) {
    double total = 0;
    for (int i = 1; i <= m; i++) {
        total += (n - (m - i)) / (double)n;
    }
    return total;
}