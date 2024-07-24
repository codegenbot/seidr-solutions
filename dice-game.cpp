Here is the solution:

double probability(int n, int m) {
    if (n > m)
        return 1.0 - (double)m / n;
    else if (n < m)
        return (double)m / n;
    else
        return 0.5;
}