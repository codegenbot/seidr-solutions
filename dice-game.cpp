```cpp
#include <iostream>
#include <iomanip>
using namespace std;

double probabilityOfPeterWinning(int n, int m) {
    double totalOutcomes = n * m;
    double peterOutcomes = 0;

    for (int i = 1; i <= m; i++) {
        peterOutcomes += n - i;
    }

    return peterOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;

    double probability = probabilityOfPeterWinning(n, m);

    cout << fixed << setprecision(2) << probability << endl;

    return 0;
}
```