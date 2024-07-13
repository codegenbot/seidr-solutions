```cpp
#include <iostream>
#include <cmath>

double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = 1; i <= m; i++) {
        p += (double)(n - i + 1) / total;
    }

    return p;
}

int main() {
    int n, m;
    std::cout << "Enter Peter's die size: ";
    std::cin >> n;
    std::cout << "Enter Colin's die size: ";
    std::cin >> m;
    double result = probability(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;
}