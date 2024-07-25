#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double p = 0;
    for (int i = m + 1; i <= n; i++) {
        p += 1.0 / n * (1.0 / m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(10) << diceGame(n, m);
    return 0;
}