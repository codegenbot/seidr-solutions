#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)(n*m);
    double petersWinningRolls = 0;
    
    for(int i=n; i<=m; i++) {
        petersWinningRolls += (double)i / total;
    }
    
    return petersWinningRolls;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}