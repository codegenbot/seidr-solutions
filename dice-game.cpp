double diceGame(int n, int m) {
    double total = (n + m - 1);
    if (m == 1) return 0;
    return (double)(n-1)/total;
}