Here is the solution:

double calculateProbability(int n, int m) {
    if (n <= m) return 0;
    double total = n * 1.0 + m;
    return (m - 1.0) / total;
}