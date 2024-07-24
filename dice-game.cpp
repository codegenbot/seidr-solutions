double getProbability(int n, int m) {
    double totalPossibleOutcomes = (n + m - 1);
    double outcomesWherePeterWins = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (j <= m) {
                outcomesWherePeterWins++;
            }
        }
    }

    return outcomesWherePeterWins / totalPossibleOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = getProbability(n, m);
    std::cout << std::fixed << std::setprecision(1) << result << std::endl;
    return 0;
}