#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    double probability = 0.0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i > j) {
                probability += 1.0 / (n * m) + 1e-9;
            }
        }
    }

    cout << probability << endl;

    return 0;
}