#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    if (n > m) return 1.0 - 1.0 * m / n;
    else if (m > n) return 1.0 * m / n;
    else return 0.5;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m);
    return 0;
}