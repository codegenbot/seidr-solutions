#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i < n; ++i) {
        total += pow(m, i);
    }
    return total / (pow(n + m - 2, n - 1));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}