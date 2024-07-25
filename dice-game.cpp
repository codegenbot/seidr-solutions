#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    int peterWins = 0;
    
    for (int i = 1; i <= m; i++) {
        peterWins += min(n, i);
    }
    
    return (double)peterWins / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}