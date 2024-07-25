#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double p = 0;
    for (int i = 1; i <= n && i < m; i++) {
        p += 1.0 / n;
    }
    for (int i = m + 1; i <= n; i++) {
        p += (n - m) * 1.0 / (n * m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}