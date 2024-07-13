#include <vector>
using namespace std;

double dicesGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); i++) {
        total *= (n - i) / (double)n * (m - i + 1) / (double)m;
    }
    if (n > m) return total;
    else return 1.0 - total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << dicesGame(n, m) << endl;
    return 0;
}