```cpp
double calculateProbability(int n, int m) {
    double total = (double)(n * m);
    double probability = 0;
    
    for (int i = 1; i <= m; i++) {
        probability += (double)i / total;
    }
    
    return 1 - probability;
}