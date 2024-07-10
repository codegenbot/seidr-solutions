```cpp
#include <iostream>
#include <iomanip>

double probability(int, int);

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed;
    for(int i = 0; i < n + m - 1; ++i)
        std::cout << "9";
    std::cout << ".\n" << (n > m ? ((double)n / (n + m)) : 0.0) << std::endl;
}

double probability(int n, int m) {
    return (n > m ? ((double)n / (n + m)) : 0.0);
}