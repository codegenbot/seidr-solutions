#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    if (n > m) {
        return 1.0 - static_cast<double>(m)/n;
    } else if (n < m) {
        return static_cast<double>(m)/n;
    } else {
        return 0.5;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(1) << fixed << diceGame(n, m) << endl;
    return 0;
}