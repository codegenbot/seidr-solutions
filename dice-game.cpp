double diceGame(int n, int m) {
    double total = (n * m);
    double higherThanColin = (m - 1) * (n - 1);
    return (higherThanColin * 1.0) / total;
}