#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double win = 0.0;
    
    for (int i = n; i <= m; i++) {
        win += ((double)i / n);
    }
    
    return win / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(10) << fixed << diceGame(n, m);
    return 0;
}