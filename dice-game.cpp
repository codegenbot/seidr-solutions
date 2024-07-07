```cpp
double probability(int n, int m) {
    double strict = 0;
    double equal = 0;
    
    for (int i = m + 1; i <= n; i++) {
        strict += (n - i + 1.0) / n;
    }
    
    for (int i = 1; i <= m && i < n; i++) {
        equal += (m - i + 1.0) / m;
    }
    
    return strict + equal;
}