double getProbability(int n, int m) {
    double p1 = 0;
    for (int i = m + 1; i <= n; i++) {
        p1 += (double)(n - i)/(m * n);
    }
    double p2 = 0;
    for (int i = 1; i < m; i++) {
        p2 += (double)(i)/(m * n);
    }
    return p1 + p2;
}