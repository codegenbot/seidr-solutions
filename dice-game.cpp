double diceGame(int n, int m) {
    double total = 0.0;
    for (int diff = 1; diff <= n - m; ++diff) {
        if (n == m || diff == 1)
            continue;
        total += (n - diff) * pow(m, diff) / pow(n * m, diff);
    }
    return total;
}