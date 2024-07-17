Here is the solution:

double probability(int n, int m) {
    if (n < m)
        return 0;
    double total = pow(n + m - 1, 2);
    double peter = pow(n, 2);
    double colin = pow(m, 2);
    return (peter - colin) / total;
}