Here is the solution:

double diceGame(int n, int m) {
    double count = 0;
    for (int i = 1; i < n; i++) {
        count += (1.0 / m);
    }
    return count / (n * m);
}