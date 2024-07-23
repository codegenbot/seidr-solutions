double probability(int n, int m) {
    double total = (double)n * m;
    double higher = 0; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) { 
            higher++;
        }
    }
    return higher / total;
}