long double probability(int n, int m) {
    long double total = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > i) {
                total++;
            }
        }
    }
    return total / (n * m);
}