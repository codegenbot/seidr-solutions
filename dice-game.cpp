#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)(n*m);
    double p = 0.0;

    // Calculate probability where Peter's roll exceeds Colin's
    for(int i = 1; i <= m && i < n; i++) {
        p += (n-i) / total;
    }

    // Calculate probability where Peter's and Colin's rolls are equal
    for(int i = 0; i <= m && i <= n; i++) {
        p -= i / total;
    }

    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}