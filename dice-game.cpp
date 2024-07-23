#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double wins = 0;
    
    for(int i = 1; i <= n - 1; i++) {
        wins += (double)i / total;
    }
    
    return wins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(10) << fixed << diceGame(n, m);
    return 0;
}