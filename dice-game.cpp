#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); i++) {
        total -= 1.0 / (n * m);
    }
    if (n > m) {
        return 1.0 - total;
    } else if (m > n) {
        return total;
    } else {
        return 0.5;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(2) << fixed << diceGame(n, m);
    return 0;
}