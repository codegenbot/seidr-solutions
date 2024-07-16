double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i < min(n, m); i++) {
        total += pow(m, -1) / n;
    }
    return 1 - total;
}