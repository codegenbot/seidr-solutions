Here is the solution:

double probability(int n, int m) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / n;
    }
    return sum - (1.0 / m);
}