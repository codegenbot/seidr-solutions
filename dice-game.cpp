#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double petersWin = 0.0;
    
    for (int i = m + 1; i <= n; i++) {
        petersWin += (double)(i - m) / total;
    }
    
    return petersWin;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m) << endl;
    return 0;
}