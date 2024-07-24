#include <iostream>
using namespace std;

double probability(int n, int m) {
    if (n > m) {
        return 1.0;
    } else if (n < m) {
        return (m - n + 1) / static_cast<double>(m * n);
    } else {
        return 1.0 / 2.0;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << probability(n, m) << endl;
    return 0;
}