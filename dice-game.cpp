Here is the solution:

double game(int n, int m) {
    double total = (double)n * m;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j)
                count++;
        }
    }

    return (double)count / total;
}