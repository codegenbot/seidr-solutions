Here is the solution:

double probability(int n, int m) {
    double total = pow(n + m - 1, 2);
    return (n * m) / (total);
}