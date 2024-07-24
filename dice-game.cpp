Here is the solution:

double probability(int n, int m) {
    if (n > m) return 1.0 - (m * 1.0 / (n + m));
    else if (n < m) return m * 1.0 / (n + m);
    else return 0.5;
}