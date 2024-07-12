double getProbability(int n, int m) {
    double probability = 1.0 * (n - 1) / (n * m);
    for(int i = 2; i < n; i++) {
        if(i <= m) {
            probability -= 1.0 * (i - 1) / (m * i);
        } else {
            probability += 1.0 * (i - m - 1) / ((n-m-1) * i);
        }
    }
    return probability;
}