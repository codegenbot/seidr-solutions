#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double totalPossibilities = n * m;
    double peterWins = (n - 1) * (m - 1);
    return peterWins / totalPossibilities;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;