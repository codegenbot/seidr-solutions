Here is the solution:

double probability(int n, int m) {
    double total = (double)n * m;
    double petersWin = 0;

    for (int i = 1; i <= n - m; i++) {
        petersWin += 1 / total;
    }

    return petersWin;
}