Here is the solution:

double diceGame(int n, int m) {
    double total = n * m;
    double p = 0;
    for (int i = 1; i < n; i++) {
        p += (n - i) / (total);
    }
    return p;
}