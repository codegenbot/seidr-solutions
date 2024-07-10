double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i < min(n, m); i++) {
        sum += (n - i) * (m - i) / (double)(n * m);
    }
    if (n > m)
        sum += (n - m) / (double)n;
    return sum;
}