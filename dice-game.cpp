#include <vector>
#include <iostream>

using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double petersWin = 0.0;

    for (int i = 1; i <= min(n - 1, m); i++) {
        petersWin += (double)(n - i) / total;
    }

    return petersWin;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}