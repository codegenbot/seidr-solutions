```cpp
#include <iostream>
using namespace std;

double probabilityOfHigherRoll(int n, int m) {
    long long totalOutcomes = (long long)n * m;
    long long favorableOutcomes = 0;
    
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
    
    double probability = probabilityOfHigherRoll(n, m);
    cout << probability << endl;
    
    return 0;
}
```