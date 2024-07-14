Here is the solution:

double probability(int n, int m) {
    if (n < m)
        return 0;
    else if (n == m)
        return 0.5;
    else
        return (m - 1.0) / (n - 1);
}