```c++
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double prob = 0.0;
    for (int i = 1; i < n && i <= m; i++) {
        prob += (n - i) * (1.0 / n) / (m + 1);
    }
    return prob;
}

int main() {
    int n, m;
    cin >> n >> m;
    double result = diceGame(n, m);
    cout << fixed << setprecision(6) << result << endl;
    return 0;
}