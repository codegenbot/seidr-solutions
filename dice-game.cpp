Here is the solution:

double diceGame(int n, int m) {
    double total = pow(n + m, 2);
    return (n * m - min(n, m)) / total;
}