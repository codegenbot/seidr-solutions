#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= m && i < n; i++) {
        total += (n - i) * pow(1.0 / n, n) - (m + 1 - i) * pow(1.0 / m, m);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}