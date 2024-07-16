#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double total = 1.0;
    double peterWins = 0.0;

    // Calculate probability of Peter winning
    for (int i = m + 1; i <= n; i++) {
        peterWins += 1.0 / n * 1.0 / m;
    }

    return peterWins / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << getProbability(n, m);
    return 0;
}