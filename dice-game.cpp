double probability(int n, int m) {
    double result = 0.0;
    for (int i = 1; i < m; ++i) { 
        result += ((n - m + 1) / (double)n);
    }
    if (m > 1) {
        result -= 1.0 / n;
    } else {
        result = 0;
    }
    return result;
}