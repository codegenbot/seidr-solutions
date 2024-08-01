#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double peterHigher = 0.0;

    for (int i = n; i <= m; i++) {
        peterHigher += (double)(n - i + 1) / total;
    }

    return peterHigher;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m);
    return 0;
}