```cpp
#include <iomanip>
#include <iostream>

double probability(int n, int m) {
    double total_outcomes = n * m;
    double favorable_outcomes = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorable_outcomes++;
            }
        }
    }
    
    std::cout << std::fixed << std::setprecision(8);
    
    double result = round((favorable_outcomes / total_outcomes) * 100000000) / 100000000;
    
    return result;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double result = probability(n, m);
    std::cout << result << std::endl;
    
    return 0;
}
```