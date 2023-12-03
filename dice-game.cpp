#include <iostream>
#include <iomanip>

double probabilityOfPeterWinning(int n, int m) {
    double totalOutcomes = n * m;
    double peterWins = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                peterWins++;
            }
        }
    }

    return peterWins / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probabilityOfPeterWinning(n, m) << endl;

    return 0;
}