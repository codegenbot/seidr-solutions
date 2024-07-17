Here is the solution:

double calculateProbability(int n, int m) {
    double total = (n * 1.0 + m - 1);
    return min(1.0, (n - 1) / total);
}