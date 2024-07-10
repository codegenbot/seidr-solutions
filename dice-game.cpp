```cpp
double getProbability(int n, int m) {
    double total = (double)n * m;
    double p = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < m; j++) {
            if(i > j) {
                p += 1.0 / total;
            }
        }
    }
    
    return p;
}