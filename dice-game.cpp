#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double totalPossibilities = (n + m - 1);
    double peterWins = 0;

    for(int i = n; i <= m + n - 1; i++) {
        peterWins += 1.0 / totalPossibilities;
    }

    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << calculateProbability(n, m) << endl;
    return 0;
}