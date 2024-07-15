```cpp
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double d = (n - m) * 1.0 / (n * m);
    if ((m > 1 && n == m + 1) || (m > 2 && n == m + 2)) 
        return 1;
    else
        return d;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}