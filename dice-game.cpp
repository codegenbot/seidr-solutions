#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for (int i = 1; i <= n; i++) {
        if (i > m) {
            p += ((double)i / n) * (m / m);
        }
    }

    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}