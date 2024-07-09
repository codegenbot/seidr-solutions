```c++
#include <cmath>
#include <iostream>
#include <iomanip>

long double probability(int n, int m) {
    long double total = 0; 
    int count = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (j > i) {
                ++count;
            }
        }
    }
    return static_cast<long double>(count) / (n * m);
}

int main() {
    std::cout << std::fixed << std::setprecision(9) << probability(34, 24);
    return 0;
}