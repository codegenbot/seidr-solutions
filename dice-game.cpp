double getProbability(int n, int m) {
    double probability = 0;
    for (int i = m + 1; i < n; ++i) {
        probability += (double)(n - i) / (n * m);
    }
    return probability;
}