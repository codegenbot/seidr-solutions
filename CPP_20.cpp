#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::fabs(a[i] - b[i]) >= std::numeric_limits<float>::epsilon()) {
            return false;
        }
    }
    
    return true;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> temp_numbers = numbers;
    std::sort(temp_numbers.begin(), temp_numbers.end());
    float min_diff = temp_numbers[1] - temp_numbers[0];
    float num1 = temp_numbers[0], num2 = temp_numbers[1];
    
    for (size_t i = 1; i < temp_numbers.size() - 1; ++i) {
        if (temp_numbers[i + 1] - temp_numbers[i] < min_diff) {
            min_diff = temp_numbers[i + 1] - temp_numbers[i];
            num1 = temp_numbers[i];
            num2 = temp_numbers[i + 1];
        } else if (issame({temp_numbers[i + 1]}, {temp_numbers[i]})) {
            if (temp_numbers[i] < num1) {
                num1 = temp_numbers[i];
                num2 = temp_numbers[i + 1];
            }
        }
    }
    
    return {num1, num2};
}

assert (issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});