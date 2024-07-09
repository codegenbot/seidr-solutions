```cpp
cpp
double probability(int n, int m) {
    double total = n * m;
    double petersWin = 0.0;
    
    for (int i = 1; i <= n - 1; i++) {
        petersWin += m - i;
    }
    
    return petersWin / total;
}