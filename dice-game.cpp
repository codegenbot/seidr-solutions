#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;
    
    for(int i = 1; i <= m && i < n; i++) {
        p += ((double)(n-m) / (n*m));
    }
    for(int i = m+1; i < n; i++) {
        p += ((double)(i-m)/(n*m));
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}