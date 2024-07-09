#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double win = 0.0;
    
    for(int i = 1; i <= m; i++) {
        win += min(n, i);
    }
    
    return win / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}