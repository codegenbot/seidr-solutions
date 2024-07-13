#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double p = 0.0;
    for (int i = 1; i <= min(m, n); i++) {
        p += (1.0 / n) * (1.0 - i / (double)n);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}