double diceGame(int n, int m) {
    double p = 0;
    for (int i = 1; i < n; i++) {
        p += 1.0 / (n * m);
    }
    return p;
}