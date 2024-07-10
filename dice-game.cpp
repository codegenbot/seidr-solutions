double diceGame(int n, int m) {
    double total = 1.0;
    double p = 0;

    for(int i = 1; i < m; i++) {
        total += 1.0;
        p += (double)(n - i) / total;
    }

    return p;
}