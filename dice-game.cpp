double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for (int i = 1; i < n; i++) {
        p += (double)i / total;
    }

    return p;
}