#include <iostream>
using namespace std;

double game(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= n; i++) {
        if (i > m) {
            total += 1.0 / n;
        }
    }
    return 1 - total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << game(n, m);
    return 0;
}