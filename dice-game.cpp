#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double win = 0;
    for(int i=1; i<n; i++) {
        win += (double)i / total;
    }
    return win;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}