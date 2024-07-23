double probability(int n, int m) {
    double total = (double)(n + m - 1);
    double p = (double)n / total;
    for(int i = 2; i <= min(n, m); i++) {
        if(i < m) {
            p += (double)i / total;
        } else {
            p -= (double)(m - i + 1) / total;
        }
    }
    return p;
}