long double probability(int n, int m) {
    long double total = 0; 
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) { 
            if (j > i) { 
                total += 1.0;
            } else if (j == i) { // Colin rolls the same, try Peter again
                total += (n - i) / static_cast<long double>(n * m);
            }
        }
    }
    return total;
}