double probability(int n, int m) {
    double total = 1.0 * (n + m - 1);
    double peterTotal = 1.0 * (n - 1);
    
    return peterTotal / total;
}