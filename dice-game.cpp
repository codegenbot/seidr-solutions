double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= std::min(n, m); i++) {
        sum += (n - i + 1) / (double)n * (m - i) / (double)m;
    }
    return sum;
}