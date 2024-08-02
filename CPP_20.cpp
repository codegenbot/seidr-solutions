#include <vector>
#include <cmath>
#include <algorithm>
#include <limits>
#include <utility>
#include <cassert>

bool issame(float a, float b) {
    return fabs(a - b) < std::numeric_limits<float>::epsilon();
}

std::pair<float, float> find_closest_elements(std::vector<float>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    float num1 = numbers[0], num2 = numbers[1];
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            num1 = numbers[i];
            num2 = numbers[i + 1];
        } else if (issame(numbers[i + 1] - numbers[i], min_diff)) {
            if (numbers[i] < num1) {
                num1 = numbers[i];
                num2 = numbers[i + 1];
            }
        }
    }
    return {num1, num2};
}

assert(issame(find_closest_elements(std::vector<float>{1.1, 2.2, 3.1, 4.1, 5.1}).first, 2.2) && issame(find_closest_elements(std::vector<float>{1.1, 2.2, 3.1, 4.1, 5.1}).second, 3.1));