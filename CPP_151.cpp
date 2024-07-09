```cpp
#include <vector>
#include <cassert>

float double_the_difference(const std::vector<float>& lst) {
    float odd_sum = 0;
    for (const auto& num : lst) {
        if (num % 1 != 0) {
            odd_sum += num;
        }
    }
    return odd_sum * 2.0f;

}

float double_the_difference(const std::vector<float>& lst) {
    float odd_sum = 0;
    for (const auto& num : lst) {
        if (num % 1 != 0) {
            odd_sum += num;
        }
    }
    return odd_sum * 2.0f;

}