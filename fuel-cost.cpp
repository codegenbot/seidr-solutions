#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n, num;
    std::cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        sum += std::floor(num / 3) - 2;
    }
    std::cout << sum << std::endl;
    return 0;
}