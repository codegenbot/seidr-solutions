Here is the solution:

double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        total += pow(1.0 / n, m - i + 1);
    }
    return total - 1.0;
}