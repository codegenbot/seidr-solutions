#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        probability += min(m, i - 1) * (n - i + 1);
    }
    probability /= n * m;
    cout << probability << endl;
    return 0;
}