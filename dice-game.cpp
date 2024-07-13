Here is the solution:

double probability(int n, int m) {
    double total = (n + m - 1);
    return ((double)n / total) * (m - 1) / (total - 1);
}