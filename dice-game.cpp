#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < m && j <= i; j++) {
            peterWins++;
        }
    }
    
    return peterWins / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(5) << getProbability(n, m);
    return 0;
}