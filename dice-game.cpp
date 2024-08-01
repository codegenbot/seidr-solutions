double diceGame(int n, int m) {
    double total = (double)n * m;
    double probability = 0.0;

    for (int i = 1; i < n; ++i)
        for (int j = 1; j <= m && j <= i; ++j)
            probability += 1.0 / (total);

    return probability;
}