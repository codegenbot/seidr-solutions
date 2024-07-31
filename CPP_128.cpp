```cpp
#include <iostream>
#include <vector>
#include <cassert>

int prod_signs(const std::vector<int>& arr) {
    int product = 1;
    long long sum = 1L;

    for (const auto& num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= (num > 0 ? 1 : -1);
        sum += std::abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    std::cout << "Product of signs: " << product << ", Sum of absolute values: " << sum << std::endl;
    return product * sum;
}

int main()
{
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    prod_signs({-1, 1, 1, 0});
    return 0;
}