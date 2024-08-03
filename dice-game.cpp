#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= min(i, m); j++) {
            if (i > j) {
                total -= 1.0 / (n * m);
            }
        }
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << diceGame(n, m) << endl;
    return 0;
}