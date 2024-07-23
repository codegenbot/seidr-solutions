double calculateProbability(int n, int m) {
    double total = (double)(n * m);
    double probability = 0;
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j < i; j++) {
            if (j >= n) break;
            probability += (double)i / total;
        }
    }
    
    return 1 - probability;
}