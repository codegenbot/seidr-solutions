#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = pow(n + m, 2);
    double peterWins = (n - 1) * m;
    return (double)peterWins / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}