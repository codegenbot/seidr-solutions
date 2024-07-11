double getProbability(int n, int m) {
    double totalOutcomes = (double)n * m;
    double favorableOutcomes = 0;
    
    for(int i = 1; i < n; i++) {
        favorableOutcomes += (double)i * m;
    }
    
    return favorableOutcomes / totalOutcomes;
}