double probability(int n, int m) {
    double total_outcomes = n * m;
    double peter_wins = 0;

    for (double i = 1; i <= n + 1; i++) {
        for (double j = 1; j <= m + 1; j++) {
            if (i > j) {
                peter_wins++;
            }
        }
    }

    return peter_wins / total_outcomes;
}