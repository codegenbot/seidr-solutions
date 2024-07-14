#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double totalRolls = (double)n * m;
    double winningRolls = (n - 1.0);
    return winningRolls / totalRolls;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}