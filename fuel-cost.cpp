#include <iostream>
#include <algorithm>

int main() {
    int n, val, sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> val;
        sum += std::max(0, (val / 3) - 2);
    }
    std::cout << sum;
    return 0;
}