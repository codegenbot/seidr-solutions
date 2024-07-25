Here is the solution:

double probability(int n, int m) {
    if (n < 1 || m < 1)
        return -1;
    double total = static_cast<double>(n + m);
    double p = 0.0;

    for (int i = 1; i <= min(n, m); ++i) {
        p += static_cast<double>(min(n, m) - i + 1) / total;
    }
    return p;
}