double probability(int n, int m) {
    double totalPeter = 0.0;
    for (int i = 1; i < n; i++) {
        totalPeter += 1.0 / n;
    }
    return totalPeter - (m > n ? 0.0 : 1.0 / m);
}