```
#include <iostream>
using namespace std;

double probabilityOfHigherRoll(int n, int m) {
    long double totalOutcomes = 0;
    long double favorableOutcomes = 0;

    for (int i = 1; i <= n-1; i++) {
        for (int j = 1; j <= m-1; j++) {
            if (i > j) {
                favorableOutcomes++;
            }
        }
    }
    
    favorableOutcomes += n-1;
    favorableOutcomes += m-1;
    totalOutcomes = n * m;

    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << probabilityOfHigherRoll(n, m) << endl;
    return 0;
}
```