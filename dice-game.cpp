```cpp
double probability(int n, int m) {
    double total = (double)(n + m - 1);
    double peterWins = (double)(n - 1);
    return peterWins / total;
}