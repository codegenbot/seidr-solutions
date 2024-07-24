#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); i++) {
        if (i < n && i == m) continue;
        total += (n - i) / (double)(n * m);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(10) << diceGame(n, m) << endl;
    return 0;
}