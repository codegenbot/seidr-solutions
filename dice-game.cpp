Here is the solution:

double probability(int n, int m) {
    double total = (double)(n + m - 1);
    return (double)n / total;
}