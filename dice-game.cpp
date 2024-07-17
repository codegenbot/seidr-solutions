double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m - 1; i++) { 
        sum += (n - i) / static_cast<double>(n * m);
    }
    return sum;
}