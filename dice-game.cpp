double calculateProbability(int n, int m) {
    double total = (n * m);
    double probability = 0;
    
    for (int i = 1; i <= m; i++) {
        if(i < m - m + n) {
            probability += (double)(m - i + 1) / total;
        }
    }
    
    return probability;
}