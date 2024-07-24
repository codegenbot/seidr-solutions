Here is the solution:

double diceGame(int n, int m) {
    double total = (double)n * m;
    double petersHigher = 0;

    for (int i = 1; i < n; i++) {
        petersHigher += (double)(n - i + 1) / total;
    }

    return petersHigher;
}