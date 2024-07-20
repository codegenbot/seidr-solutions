#include <iostream>
using namespace std;

#include <iomanip>

double diceGame(int n, int m) {
    if (n <= m)
        return 1.0 - (double)m / (m + 1);
    else
        return (double)(m + 1) / (n + m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;