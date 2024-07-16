double probability(int n, int m) {
    double sum = 0;
    for (int i = m + 1; i < n; i++) {
        sum += (1.0 / m) * (1.0 / (n - i));
    }
    return sum;
}