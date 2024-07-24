#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double p = 0.0;
    for (int i = 1; i <= min(n, m); i++) {
        p += (double)(n - i) / n * (double)(m - i + 1) / m;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m);
    return 0;
}