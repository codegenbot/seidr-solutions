#include <vector>
using namespace std;

double probability(int n, int m) {
    if (n <= m) {
        return 0.0;
    }
    double total = 1.0 * n * m;
    int count = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= n; j++) {
            count++;
        }
    }
    return (double)count / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}