#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double totalOutcomes = (double)n * m;
    double petersWins = 0;
    
    for (int i = 1; i <= m - 1; i++) {
        petersWins += (double)(n - i + 1);
    }
    
    return petersWins / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << getProbability(n, m) << endl;
    return 0;
}