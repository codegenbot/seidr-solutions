double diceGame(int n, int m) {
    double p = 0;
    for (int i = 1; i <= min(n, m); i++) p += 1.0 / n;
    if (n > m) {
        p -= 1.0 / m;
    }
    return p;
}