#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); ++i) {
        total -= (1.0 / n) * (1.0 / m);
    }
    if (n > m) {
        total += (1.0 / n) * (1.0 / m);
    } else if (m > n) {
        total += (1.0 / m) * (1.0 / n);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}