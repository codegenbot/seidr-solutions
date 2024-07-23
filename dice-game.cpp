double probability(int n, int m) {
    double total = (n + m - 1);
    double p = 0;
    for(int i = 1; i < m; i++) {
        p += (double)(i) / (total);
    }
    return 1 - p;
}