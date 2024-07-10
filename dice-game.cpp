double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); ++i)
        total -= 1.0 / max(n, m);
    return total;
}