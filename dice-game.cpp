#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double total = (double)n * m;
    double count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }

    return count / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(2) << getProbability(n, m) << endl;
    return 0;
}