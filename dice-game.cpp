Here is the solution:

double probability(int n, int m) {
    double total = (double)n * m;
    return 1.0 - ((n / (double)(n + m)) + (m / (double)(n + m))) / 2.0;
}