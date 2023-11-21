#include <iostream>

using namespace std;

long double probabilityOfHigherRoll(int n, int m) {
    long double totalOutcomes = n * m;
    long double favorableOutcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorableOutcomes++;
            }
        }
    }

    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;

    long double probability = probabilityOfHigherRoll(n, m);
    
    cout.precision(8);
    cout << fixed << probability << endl;

    return 0;
}