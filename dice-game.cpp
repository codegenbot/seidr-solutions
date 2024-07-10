#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (long long)n * m;
    double peterWins = 0;
    
    for(int i = n; i < n + m; i++) {
        peterWins += ((long long)(n - i)) * 2.0 / total;
    }
    
    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}