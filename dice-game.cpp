#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double p = 0;
    for (int i = n + 1; i <= m; i++) {
        p += (1.0 / n) * (1.0 / m);
    }
    for (int i = m + 1; i <= n; i++) {
        p -= (1.0 / n) * (1.0 / m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}