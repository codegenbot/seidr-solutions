#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)(n*m);
    double p = 0.0;
    
    for(int i = 1; i <= min(m, n-m); i++) {
        p -= (2.0 / total); // probability that rolls are equal
    }
    
    for(int i = max(n-m+1, 1); i <= n; i++) {
        p += (n-i) / total;
    }

    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}