#include <iostream>
using namespace std;

double findProbability(int n, int m) {
    double peterWins = 0.0;
    for (int i = m + 1; i <= n; i++) {
        peterWins += 1.0 / n * 1.0 / m;
    }
    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << findProbability(n, m);
    return 0;
}