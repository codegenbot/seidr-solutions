```cpp
#include <vector>
#include <cassert>

float double_the_difference(const std::vector<float>& lst) {
    float odd_sum = 0;
    for (const auto& val : lst) {
        if (std::abs(std::fmod(val, 1)) > 0.5f) {
            odd_sum += val;
        }
    }
    return std::abs(odd_sum - (lst[0] + *std::next(lst.end(), -1)));
}

int main() {
    std::vector<float> lst = {1.0f, 2.5f, -3.5f, 4.0f};
    float result = double_the_difference(lst);
    return 0;
}