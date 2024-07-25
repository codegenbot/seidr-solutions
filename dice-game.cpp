#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double success = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                success++;
            }
        }
    }

    return success / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m);
    return 0;
}