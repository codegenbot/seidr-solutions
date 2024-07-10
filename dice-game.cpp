#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        if (i < n) {
            total += 1.0 / m;
        } else if (i == n) {
            total -= 1.0 / m;
        }
    }
    return max(0.0, min(total, 1.0));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}