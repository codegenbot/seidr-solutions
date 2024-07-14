#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    if(n < m) swap(n,m);
    
    double total = 1.0;
    for(int i=m+1; i<=n; i++) {
        total += 1.0 / i;
    }
    
    return 1 - total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}