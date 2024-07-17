Here is the solution:

double diceGame(int n, int m) {
    if (n < 1 || m < 1) return -1; // error handling
    double total = 1.0 * n * m;
    double count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }
    return count / total;
}