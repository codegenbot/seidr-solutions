#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long double probability = 0.0;

    for (int i = 0; i <= n * 100; ++i) {
        for (int j = 0; j <= m * 100; ++j) {
            if (i > j) {
                probability += 1.0 / (n * 100) / (m * 100);
            }
        }
    }

    cout.precision(10);
    cout << probability << endl;

    return 0;
}