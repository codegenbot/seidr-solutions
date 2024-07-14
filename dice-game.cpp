#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double totalPossibleRolls = (double)n * m;
    double winningRolls = n - m;
    return winningRolls / totalPossibleRolls;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}