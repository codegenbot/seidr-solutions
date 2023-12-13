#include <iostream>
#include <iomanip>
using namespace std;

double probabilityOfHigherRoll(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorableOutcomes += 1.0;
            }
        }
    }

    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(9);
    cout << probabilityOfHigherRoll(n, m) << endl;
    return 0;
}