#include <iostream>

double probabilityPeterHigher(int n, int m) {
    double totalOutcomes = n * m;
    double peterOutcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                peterOutcomes++;
            }
        }
    }

    return peterOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    double probability = probabilityPeterHigher(n, m);
    cout << probability;

    return 0;
}