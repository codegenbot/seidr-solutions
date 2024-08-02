#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (n - i + 1.0) / n;
    }
    return sum * (m > n);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}