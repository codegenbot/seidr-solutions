Here is the solution:

double game(int n, int m) {
    double p = 0;
    for (int i = 1; i < n; i++) {
        p += 1.0 / n;
    }
    return p + (1.0 / m);
}