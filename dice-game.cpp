#include <vector>
using namespace std;

double game(int n, int m) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (n - i + 1) / static_cast<double>(n * m);
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << game(n, m) << endl;
    return 0;
}