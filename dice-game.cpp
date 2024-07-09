double probability(int n, int m) {
    if(n <= m) {
        return 0.0;
    }
    
    double total = (n + m - 1);
    return (n - m - 1.0) / total;
}