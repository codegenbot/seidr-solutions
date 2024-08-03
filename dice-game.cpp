#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double p = 0.0;
    for (int i = n + 1; i <= m * 2; i++) {
        p += 1.0 / ((double)n * (double)m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}