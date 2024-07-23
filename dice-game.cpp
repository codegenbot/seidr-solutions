double diceGame(int n, int m) {
    double total = (n + m) * (n + m);
    return (m * (n - 1)) / total;
}