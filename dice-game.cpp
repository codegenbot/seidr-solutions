double diceGame(int n, int m) {
    if (n < m)
        return 0;
    else if (m == 1)
        return 1.0;

    double total = 0.0;
    for (int i = m + 1; i <= n; i++)
        total += 1.0 / i;

    return total;
}