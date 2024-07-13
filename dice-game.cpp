Here is the solution:

double getProbability(int n, int m) {
    return (m == 1) ? 1 : (n > m) ? (double)n / (n + m - 1) : (double)m / (n + m - 1);
}