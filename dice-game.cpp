#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    return (n - 1.0) / (n + m - 2.0);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;