#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n, sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        sum += (x / 3) - 2;
    }
    std::cout << sum << std::endl;
    return 0;
}