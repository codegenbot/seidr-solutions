cpp
double probability(int n, int m) {
    double total = n * m;
    double p = 0;
    for (int i = 1; i < m; i++) {
        p += (m - i) * (n - 1) / total;
    }
    return p;
}