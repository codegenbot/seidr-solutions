```
double getProbability(int n, int m) {
    return (n - m > 0 ? 1.0 * (n - m) : 1.0 * (m - n)) / (n * m);
}