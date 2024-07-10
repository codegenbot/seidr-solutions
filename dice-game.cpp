#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double count = 0;
    for (int i = n; i <= m; i++) {
        count += 1.0 / n;
    }
    return count / (n + m - 1);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}