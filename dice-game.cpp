#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    return 1.0 * (n - m) / (double)(n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}