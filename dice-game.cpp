double diceGame(int n, int m) {
    double result = 0.0;
    for (int i = n; i < m + n; i++) {
        result += (i - n + 1) / (double)(n * m);
    }
    return result;
}