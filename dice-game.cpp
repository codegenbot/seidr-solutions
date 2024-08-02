Here is the solution:

double diceGame(int n, int m) {
    if (n <= 1 || m <= 1) return 0.0;
    double count = 0;
    for (int i = 2; i <= n; i++) {
        count += 1.0 / (n * m);
    }
    return count;
}