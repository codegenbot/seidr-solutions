Here is the solution:

double probability(int n, int m) {
    if (n > m) {
        return 1.0 - (double)m / (n + m);
    } else if (n < m) {
        return (double)n / (n + m);
    } else {
        return 0.5;
    }
}