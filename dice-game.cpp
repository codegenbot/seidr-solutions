#include <vector>
using namespace std;

double game(int n, int m) {
    double p = 0;
    for (int i = 1; i <= m; i++) {
        p += (n - i + 1) / static_cast<double>(n * m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << game(n, m) << endl;
    return 0;
}