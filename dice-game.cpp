double probability(int n, int m) {
    double total = (n + m - 2) * 1.0; 
    double p = 0.0;
    for(int i = 1; i < m; i++) {
        p += 1.0 / n;
    }
    return p;
}