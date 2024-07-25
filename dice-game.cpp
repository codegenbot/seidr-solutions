#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double sum = 0;
    for (int i = m + 1; i <= n; i++) {
        sum += 1.0 / m;
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << getProbability(n, m) << endl;
    return 0;
}