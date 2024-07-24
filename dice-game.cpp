#include <vector>
using namespace std;

double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m && i < n; i++) {
        total += 1.0 / n - 1.0 / m;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}