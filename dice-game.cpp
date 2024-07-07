double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m; i++) {
        double prob = (n - i + 1.0) / n; 
        sum += prob;
    }
    return sum;
}