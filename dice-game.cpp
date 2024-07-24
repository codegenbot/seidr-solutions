double getProbability(int n, int m) {
    double probability = 0;
    for (int i = 1; i < m; ++i) {
        probability += (double)1 / (n * m);
    }
    return probability;
}