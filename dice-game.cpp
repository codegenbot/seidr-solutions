#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= n; j++) {
            total += 1.0 / (n * m);
        }
    }
    return 1 - (m / (double) (n * m));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}