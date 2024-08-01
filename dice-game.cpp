#include <iostream>
#include <iomanip>

double calculateProbability(int n, int m) {
    double totalPossibilities = (n + m - 1);
    double peterWins = (m - 1);

    return static_cast<double>(peterWins) / totalPossibilities;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(1) << fixed << calculateProbability(n, m) << endl;
    return 0;
}