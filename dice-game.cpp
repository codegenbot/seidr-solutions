double probability(int n, int m) {
    if (n <= m) return 1; 
    double result = 0.0;
    for (int i = m+1; i <= n; ++i) { 
        result += ((double)i)/n; 
    }
    return result;
}