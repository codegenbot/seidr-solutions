```
double getProbability(int n, int m) {
    double total = (double)(n * m);
    return (n - 1) / total;
}