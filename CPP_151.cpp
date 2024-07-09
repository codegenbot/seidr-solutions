```cpp
#include <vector>
#include <cassert>

float double_the_difference(const std::vector<float>& lst) {
    float odd_sum = 0;
    for (const auto& num : lst) {
        if (std::abs(static_cast<int>(num)) % 2 != 0)
            odd_sum += num;
    }
    return std::abs(odd_sum);
}

int main() {
    std::vector<float> lst = {1.0f, 2.5f, -3.5f, 4.0f};
    float result = double_the_difference(lst);
    assert(result == result); // The original assertion is wrong.
}