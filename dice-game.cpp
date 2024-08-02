#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / n;
    }
    return min(1.0, sum - (m > 0 ? 1.0 / m : 0));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}