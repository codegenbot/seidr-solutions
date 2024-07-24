#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    if (n <= m) return 0.0;
    double res = 0.0;
    for (int i = 1; i <= m; i++) {
        res += 1.0 / n;
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m);
    return 0;
}