```c++
#include <iostream>
#include <iomanip>

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m - 1; i++) {
        total += 1.0 / n;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    double d = diceGame(n, m);
    std::cout << fixed << setprecision(6) << d << endl;
    return 0;
}