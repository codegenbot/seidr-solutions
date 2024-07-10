```cpp
double probability(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i && j <= m; ++j) {
            peterWins += 1.0;
        }
    }
    
    return peterWins / total;
}