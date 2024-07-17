Here is the solution:

double probability(int n, int m) {
    double p = 0.0;
    for (int i = 1; i < n; ++i) {
        p += 1.0 / m;
    }
    return p;
}