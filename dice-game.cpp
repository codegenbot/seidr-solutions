#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;
    
    for(int i = 1; i < n && i <= m; i++) {
        p += ((double)i / n) * ((n - i) / (m - 1));
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}