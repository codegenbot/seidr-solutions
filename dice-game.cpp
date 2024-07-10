#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < m && j <= i; ++j) {
            peterWins += 1.0;
        }
    }
    
    return peterWins / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m) << endl;
}