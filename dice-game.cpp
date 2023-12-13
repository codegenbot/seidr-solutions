```cpp
#include <iostream>

double probabilityOfPeterWinning(int n, int m) {
    double totalOutcomes = n * m;
    double peterWins = 0;
    
    for (double i = 1; i <= n; i++) {
        for (double j = 1; j <= m; j++) {
            if (i > j) {
                peterWins++;
            }
        }
    }
    
    return peterWins / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = probabilityOfPeterWinning(n, m);
    std::cout << probability << std::endl;
    
    return 0;
}
```