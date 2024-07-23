#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double sum = 1.0;
    for (int i = 1; i < n; ++i) {
        sum += 1.0 / m;
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << diceGame(n, m) << endl;
    return 0;
}