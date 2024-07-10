#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double numerator = 1.0;
    double denominator = (n * m);
    for (int i = 1; i <= min(n, m); i++) {
        numerator *= (n - i);
        if (i < m) {
            denominator *= (m - i);
        }
    }
    return numerator / denominator;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}