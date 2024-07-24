double diceGame(int n, int m) {
    double total = 0;
    for (int i = 1; i < n; ++i) {
        total += 1.0 / m;
    }
    return 1 - pow(1 - 1.0 / m, n);
}