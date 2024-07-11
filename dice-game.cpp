double getProbability(int n, int m) {
    double p = 0;
    for (int i = 1; i <= n - 1; ++i) {
        p += 1.0 / n * 1.0 / m;
    }
    return p;
}