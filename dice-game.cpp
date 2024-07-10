```cpp
#include <iostream>
#include <iomanip>

double probability(int, int);

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(2) << (n > m ? ((double)n / (n + m)) : 0.0) << std::endl;
}

double probability(int n, int m) {
    return (n > m ? ((double)n / (n + m)) : 0.0);
}