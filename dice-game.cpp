double diceGame(int n, int m) {
    double probability = 0.0;
    for (int i = n; i < n + m - 1; i++) {
        probability += (n - i) * pow((1.0 / n), n) * pow((1.0 / m), m);
    }
    return probability;
}