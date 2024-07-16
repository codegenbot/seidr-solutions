double diceGame(int n, int m) {
    double total = (n + m) * max(n, m);
    return ((double)(max(n, m) - 1)) / total;
}