#include <iostream>
using namespace std;

double probability(int n, int m) {
    double totalPossibilities = 1.0 * (n + m - 2);
    double peterWins = 0;
    
    for(int i = n; i <= m + n - 1; i++) {
        peterWins += 1.0 / totalPossibilities;
    }
    
    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}