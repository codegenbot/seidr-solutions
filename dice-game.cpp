#include <vector>
using namespace std;

double game(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m && i < n; ++i)
        total += 1.0 / m;
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(17) << game(n, m);
    return 0;
}