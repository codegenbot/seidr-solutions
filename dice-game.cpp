double diceGame(int n, int m) {
    double total = (n * m);
    double petersWin = ((n - m + 1)) / (total - (m - 1));
    return petersWin;
}