#include <iostream>
using namespace std;

#include <iomanip>

double getProbability(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0.0;

    for (int i = m + 1; i <= n; i++) {
        peterWins += (double)(n - i + 1) / total;
    }

    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << getProbability(n, m) << endl;
    return 0;