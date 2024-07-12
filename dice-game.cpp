double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i < m || i > n; ++i) {
        if(i >= m && i <= n) {
            p += (double)(1) / total;
        }
    }

    return p;
}