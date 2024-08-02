#include <vector>
#include <cmath>
#include <algorithm>
#include <limits>
#include <utility>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return fabs(a[0] - b[0]) < std::numeric_limits<float>::epsilon() &&
           fabs(a[1] - b[1]) < std::numeric_limits<float>::epsilon();
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    float num1 = sorted_numbers[0], num2 = sorted_numbers[1];
    for (size_t i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            num1 = sorted_numbers[i];
            num2 = sorted_numbers[i + 1];
        } else if (issame({sorted_numbers[i], sorted_numbers[i + 1]}, {num1, num2})) {
            if (sorted_numbers[i] < num1) {
                num1 = sorted_numbers[i];
                num2 = sorted_numbers[i + 1];
            }
        }
    }
    return {num1, num2};
}

assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));