Here is the solution:

double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i < n; ++i) {
        total += 1.0 / m;
    }
    return total;
}