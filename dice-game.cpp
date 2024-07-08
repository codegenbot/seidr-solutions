```cpp
#include<iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) {
        total += (m - i + 1.0) / pow(m, n);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m);
    return 0;
}