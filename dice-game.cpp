double getProbability(int n, int m) {
    double probability = 0;
    for (int i = n; i < m; ++i) {
        probability += 1.0 * (m - i) / (n * m);
    }
    return probability;
}