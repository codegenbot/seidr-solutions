Here is the solution:

double probability(int n, int m) {
    double total = (double)n * m;
    return (n - 1.0) / total;
}