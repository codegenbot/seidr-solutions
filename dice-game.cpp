#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0;
    
    for (int i = m + 1; i <= n; i++) {
        peterWins += (double)i / total;
    }
    
    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m);
    return 0;
}