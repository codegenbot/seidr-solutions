Here is the solution:

double getProbability(int n, int m) {
    double total = (n + m - 1);
    return (n - 1) / (double)(total);
}