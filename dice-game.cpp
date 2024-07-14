double probability(int n, int m) {
    double total = (double)(n * m);
    double numerator = 0;

    for (int i = m + 1; i <= n; i++) { 
        numerator += (double)(m + 1) / total;
    }
    
    return numerator;
}