```cpp
#include <vector>
#include <iostream>
#include <cmath>

int fuelCost(const std::vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = std::floor(num / 3.0) - 2;
        sum += result;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    std::cout << fuelCost(numbers) << std::endl;
    return 0;
}
```