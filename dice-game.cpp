#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double p = 0.0;
    for (int i = 1; i <= min(n, m); i++) {
        p += (n - i) / (double)n * (m - i) / (double)m;
    }
    if (n > m) {
        p += 1.0 - (m + 1) / (double)n;
    } else if (n < m) {
        p += 1.0 - (n + 1) / (double)m;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;