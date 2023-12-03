#include <iostream>
#include <iomanip>
using namespace std;

double probabilityOfWinning(int n, int m) {
    int totalOutcomes = n * m;
    int favorableOutcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorableOutcomes++;
            }
        }
    }

    return (double)favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;

    double probability = probabilityOfWinning(n, m);
    cout << fixed << setprecision(2) << probability << endl;

    return 0;
}