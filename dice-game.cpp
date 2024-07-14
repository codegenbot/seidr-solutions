#include <vector>
using namespace std;

double game(int n, int m) {
    double p = 0;
    for (int i = m + 1; i <= n; i++) {
        p += 1.0 / n * 1.0 / m;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(17) << fixed << game(n, m);
    return 0;
}