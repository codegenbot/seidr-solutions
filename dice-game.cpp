#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double totalPossibilities = (n + m - 1);
    double peterWins = 0;
    
    for(int i = m; i <= n - 1; i++) {
        peterWins += 1.0 / totalPossibilities;
    }
    
    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << getProbability(n, m) << endl;
    return 0;
}