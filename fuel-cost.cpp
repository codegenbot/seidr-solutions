```cpp
#include <iostream>
#include <vector>

int fuelCost(const std::vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int result = static_cast<int>(i / 3.0);
        if (result >= 1) {
            --result;
            sum += result;
        }
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::cout << fuelCost(v) << std::endl;
    return 0;
}