#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (n + m);
    double peterWins = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m; j++) {
            if (i > j) {
                peterWins++;
            }
        }
    }
    
    return peterWins / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6);
    cout << diceGame(n, m) << endl;
    return 0;
}