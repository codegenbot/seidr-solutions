#include <vector>
#include <iostream>

using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0.0;

    if(n > m) {
        for(int i = m + 1; i <= n; i++) {
            peterWins += 1.0;
        }
    } else if(m > n) {
        for(int i = n + 1; i <= m; i++) {
            peterWins += 1.0;
        }
    }

    return peterWins / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}