double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i < min(n, m); i++) {
        if(i < m) {
            total += (m - i) * (1.0 / (n * m));
        }
    }
    return total;
}