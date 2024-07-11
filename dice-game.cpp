double probability(int n, int m) {
    if (n < m)
        return 0.0;
    else
        return 1.0 - (m * (m + 1) / (double) (n * m));
}