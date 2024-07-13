Here is the solution:

double getProbability(int n, int m) {
    double totalPossibilities = n * m;
    double higherPossibilities = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j != i; j++) {
            higherPossibilities++;
        }
    }

    return higherPossibilities / totalPossibilities;
}