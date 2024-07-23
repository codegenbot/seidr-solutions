```
double calculateProbability(int n, int m) {
    double total = (double)(n * m);
    double probability = 0;
    
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= n; j++) {
            probability += (double)1 / total;
        }
    }
    
    return 1 - probability;
}