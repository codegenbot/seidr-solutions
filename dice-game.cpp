#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    if (n == 1 || m == 1) {
        return 0;
    }
    double totalPossible = pow(n + m - 1, 2);
    double peterWins = 0.0;
    for (int i = 1; i < n; i++) {
        peterWins += (double)(m - i + 1) / totalPossible;
    }
    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << getProbability(n, m);
    return 0;
}