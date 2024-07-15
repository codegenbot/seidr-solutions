```cpp
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double p = 1.0;
    for (int i = 1; i <= m; i++) {
        p -= (i / (double)n);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    double d = diceGame(n, m);
    cout << fixed << setprecision(2) << d << endl;
    return 0;
}