Here is the solution:

double probability(int n, int m) {
    if (n < 1 || m < 1) return -1.0;
    double total = static_cast<double>(n + m);
    double p = static_cast<double>(n) / total;
    return p;
}