#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double totalPossibilities = (long long)n * m;
    double peterWins = 0;

    for (int i = m + 1; i <= n; i++) {
        peterWins += (long long)i / totalPossibilities;
    }

    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m);
    return 0;
}