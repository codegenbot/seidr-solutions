double diceGame(int n, int m) {
    double total = (n > m ? (n * m) : (m * (m - 1)) + (n * (n - 1)));
    return total == 0 ? 0 : ((n > m ? (n - 1) : m) / total);
}