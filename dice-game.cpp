#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m && i < n; i++) {
        total += 1.0 / m;
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(17) << getProbability(n, m) << endl;
    return 0;
}