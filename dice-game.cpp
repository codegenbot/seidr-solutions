#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); i++) {
        total -= (i * 1.0 / n) * (i * 1.0 / m);
    }
    if (n > m)
        return 1 - total;
    else
        return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(2) << fixed << diceGame(n, m) << endl;
    return 0;
}