#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double p = 0.0;
    for (int i = 1; i <= m; i++) {
        p += (double)(n - i + 1) / n;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2);
    cout << diceGame(n, m) << endl;
    return 0;
}