#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= min(n, m); i++) {
        if (i < m)
            total += pow(1.0 / n, i);
        else
            total += 1.0 - pow(1.0, 1.0 / n);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}