#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double petersWin = 0;
    
    for(int i = n; i <= m; ++i){
        petersWin += (double)(n - i + 1) / total;
    }
    
    return petersWin;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(17) << diceGame(n, m);
    return 0;
}