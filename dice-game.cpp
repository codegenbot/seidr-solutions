```cpp
double getProbability(int n, int m) {
    int totalOutcomes = n*m;
    int favorableOutcomes = 0;
    
    for (int i = 1; i <= min(n,m); i++) {
        if (n - i > m) {
            favorableOutcomes += m;
        } else {
            favorableOutcomes += n - i;
        }
    }
    
    return (double)favorableOutcomes / totalOutcomes;
}