double probability(int n, int m) {
    if(m >= n) {
        return 0.0; // Colin's dice is always higher or equal
    }
    double total = (n + m - 1);
    return ((m + 1.0) / total) * (n - m);
}