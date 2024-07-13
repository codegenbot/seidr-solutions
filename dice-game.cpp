double diceGame(int n, int m) {
    double total = (long long)n * m;
    return 1.0 - (double)n / total;
}