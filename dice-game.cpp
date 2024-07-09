long double probability(int n, int m) {
    long double total = 0; 
    for (int i = 1; i <= m; i++) {
        total += std::min(n - i + 1, m - i + 1);
    }
    return static_cast<long double>(total) / ((long double)(n * m));
}