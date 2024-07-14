Here is the solution:

double diceGame(int n, int m) {
    double total = (n + m);
    return 1.0 - ((double)m / total);
}