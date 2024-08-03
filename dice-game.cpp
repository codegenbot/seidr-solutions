#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = 1.0 * n * m;
    double peterWins = (n - 1) * m / total;
    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}