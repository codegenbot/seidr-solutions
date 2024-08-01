double diceGame(int n, int m) {
    double sum = 0.0;
    for (int i = m + 1; i <= n; i++) {
        sum += 1.0 / n;
    }
    return sum;
}