double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= m; j++) { 
            if (i > j) {
                sum += 1 / (double)(n * m);
            }
        }
    }
    return sum;
}