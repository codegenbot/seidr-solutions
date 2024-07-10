#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b);

std::vector<float> sort_even(std::vector<float>& vec) {
    std::sort(vec.begin(), vec.end(), [](float a, float b) {
        return ((int)a % 2 == 0) && ((int)b % 2 == 0) && a < b;
    });
    return vec;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    std::vector<float> numbers = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> sorted_nums = sort_even(numbers);

    assert(issame(sorted_nums, std::vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    for (const auto& num : sorted_nums) {
        std::cout << num << " ";
    }
    return 0;
}