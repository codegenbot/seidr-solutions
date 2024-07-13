#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)(n * m);
    double peterWins = 0;
    
    for(int i = n; i <= m; i++) {
        peterWins += (double)i / total;
    }
    
    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}