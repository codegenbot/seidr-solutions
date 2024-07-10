#include <iostream>

using namespace std;

double diceGame(int n, int m) {
    double p = 0.0;
    for (int i = n + 1; i <= m; i++) {
        p += 1.0 / n;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}