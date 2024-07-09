#include <iostream>
#include <iomanip>
using namespace std;

double getProbability(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0.0;

    for (int i = 1; i <= m; i++) {
        peterWins += (double)(n - i) / total;
    }

    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << getProbability(n, m) << endl;
    return 0;
}