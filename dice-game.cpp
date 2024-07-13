Here is the solution:

double getProbability(int n, int m) {
    if (n < m) {
        return 1 - 1.0 / m;
    } else if (n > m) {
        return 1.0 / m;
    } else {
        return 0.5;
    }
}