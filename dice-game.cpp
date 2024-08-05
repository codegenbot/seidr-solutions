double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i < n; i++) {
        sum += 1 / (i * m);
    }
    return sum;
}