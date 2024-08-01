#include <iostream>
using namespace std;

double calculateProbability(int n, int m) {
    double totalOutcomes = (double)n * m;
    double petersWinningRolls = (n - 1) * (m);
    return petersWinningRolls / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << calculateProbability(n, m) << endl;
    return 0;
}