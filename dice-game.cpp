#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = n + 1; i <= n * m; i++) {
        if (i % n > 0) {
            sum += 1.0 / n;
        } else if (i % m < m) {
            sum += 1.0 / m;
        }
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;