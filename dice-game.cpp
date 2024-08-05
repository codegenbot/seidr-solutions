#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (n + m);
    double p = 1.0;
    
    for (int i = 1; i <= m; i++) {
        p += (i * 1.0 / total);
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}