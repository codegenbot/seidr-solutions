Here is the solution:

double diceGame(int n, int m) {
    double total = (double)n * m;
    double higher = 0;

    for (int i = 1; i < n; i++) {
        higher += (double)(m - i + 1);
    }

    return higher / total;
}