Here is the solution:

#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    if (n == 1 || m == 1) return 0.0;
    double total = n + m - 1;
    return (m * 1.0 / total);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}