#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (n - i + 1.0) / n * (m - i) / m;
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(10) << diceGame(n, m) << endl;
    return 0;
}