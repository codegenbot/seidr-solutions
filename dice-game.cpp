#include <iostream>
#include <iomanip>

double calculateProbability(int n, int m) {
    double totalPossibleRolls = (n + m - 1);
    double peterWins = 0;

    for (int i = m; i <= n - 1; ++i) {
        peterWins += (n - i) * 2;
    }

    return peterWins / totalPossibleRolls;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << std::fixed << std::setprecision(1) << calculateProbability(n, m) << std::endl;
    return 0;
}