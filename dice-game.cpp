```cpp
#include <iostream>

double probability(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorableOutcomes++;
            }
        }
    }
    
    double result = favorableOutcomes / totalOutcomes;
    return result;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double result = probability(n, m);
    std::cout << result << "\n";
    
    return 0;
}
```