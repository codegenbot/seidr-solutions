#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long double probability = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }

    cout << fixed << setprecision(8) << probability << endl;

    return 0;
}