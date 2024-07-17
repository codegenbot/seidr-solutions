double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= min(n, m); i++) {
        if (i < n && i == m)
            continue;
        sum += (n - i + 1) / (double)n * (m - i) / (double)m;
    }
    return sum;
}