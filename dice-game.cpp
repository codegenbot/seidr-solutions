long double probabilityOfHigherRoll(int n, int m) {
    long double probability = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m; j++) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }
    probability += (n > m ? (n - 1) / (n * m) : (n - 1.0) / (n * m));
    return probability;
}