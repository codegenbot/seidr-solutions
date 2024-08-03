Here is the solution:

double probability(int n, int m) {
    if (n == 1 || m == 1) return 0;
    if (n > m) {
        double result = (m - 1.0) / (n + m - 2.0);
        return result;
    } else {
        double result = (n - 1.0) / (n + m - 2.0);
        return result;
    }
}