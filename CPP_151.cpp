```cpp
#include <iostream>
#include <vector>
#include <cmath>

float double_the_difference(const std::vector<float>& lst) {
    float sum = 0;
    for (const auto& num : lst) {
        if (std::abs(num) % 2 != 0) {
            sum += pow(fmod(num, 1), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.2f, -3.4f, 5.6f, 0.7f, -8.9f};
    float odd_sum = double_the_difference(lst);
    assert(odd_sum == pow(fmod(1.2, 1), 2) + pow(fmod(-3.4, 1), 2) + pow(fmod(5.6, 1), 2));
}