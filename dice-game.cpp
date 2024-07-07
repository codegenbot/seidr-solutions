double getProbability(int n, int m) {
    double total = (double)n * m;
    int sum1 = 0;
    for (int i = 1; i < n; i++) sum1 += 1;
    return (double)sum1 / total;
}