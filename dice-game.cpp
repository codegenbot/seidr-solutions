```
double probability(int n, int m) {
    if (n < m)
        return 0.0;
    else
        return (n - m) / (double) (n * m);
}