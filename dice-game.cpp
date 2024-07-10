#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double petersWin = 0.0;
    
    for (int i = m + 1; i <= n; i++) {
        petersWin += (double)i / total;
    }
    
    return petersWin;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m);
    return 0;
}