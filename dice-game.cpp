double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = 1; i <= n; i++) {
        p += 1.0 / total;
        if(i < m) break;
    }

    return p;
}