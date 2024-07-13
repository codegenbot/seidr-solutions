#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double winning = 0;
    
    for (int i = m+1; i <= n; ++i) {
        winning += (double)i / total;
    }
    
    return winning;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}