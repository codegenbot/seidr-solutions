#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (n + m);
    double peterWins = 0;
    
    for (int i = m+1; i <= n; i++) {
        peterWins += 1.0;
    }
    
    return peterWins / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;
}