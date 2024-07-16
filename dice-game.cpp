double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= std::min(m, n - 1); i++) {
        total += 1.0 / n;
    }
    return 1.0 - total;
}