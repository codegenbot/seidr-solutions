#include <vector>
#include <iostream>

using namespace std;

double diceGame(int n, int m) {
    double total = (n + m);
    double peterWins = 0.0;
    
    for(int i = m + 1; i <= n; i++) {
        peterWins += 1.0 / total;
    }
    
    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m);
    return 0;
}