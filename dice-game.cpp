```cpp
#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = n + 1; i <= m * n; i++) {
        sum += 1.0 / (n * m);
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}