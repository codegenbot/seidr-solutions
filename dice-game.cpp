#include <vector>
using namespace std;

double game(int n, int m) {
    double p = 0.0;
    for (int i = 1; i <= n; i++) {
        p += (1.0 / n) * (1.0 / m);
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(17) << game(n, m) << endl;
    return 0;
}