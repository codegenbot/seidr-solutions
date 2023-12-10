```cpp
double probabilityOfHigherRoll(int n, int m) {
    double totalOutcomes = (double)n * m;
    double favorableOutcomes = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorableOutcomes++;
            }
        }
    }
    
    return favorableOutcomes / totalOutcomes;
}
```