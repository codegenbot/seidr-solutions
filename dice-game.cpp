#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    return 1.0 - (1.0 * m / (n + m));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}