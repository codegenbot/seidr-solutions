Here is the solution:

double probability(int n, int m) {
    double total = (n + m - 1);
    double p = (m - 1.0) / total;
    return p;
}