Here is the solution:

double game(int n, int m) {
    double sum = 0;
    for (int i = 1; i < n; i++) {
        sum += 1.0 / m;
    }
    return sum;
}