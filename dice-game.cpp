#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = pow(n+m, 2);
    double petersHigh = 0;
    
    for (int i=1; i<n; i++) {
        petersHigh += pow(m, 2);
    }
    
    return petersHigh / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}