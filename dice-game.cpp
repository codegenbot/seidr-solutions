#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0.0;
    
    for(int i = 1; i <= m - 1; i++) {
        peterWins += (double)(n - i + 1) / total;
    }
    
    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << diceGame(n, m) << endl;
    return 0;