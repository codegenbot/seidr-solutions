#include <vector>
#include <cmath>
#include <algorithm>
#include <limits>
#include <utility>
#include <cassert>

bool issame(float a, float b) {
    return std::abs(a - b) < std::numeric_limits<float>::epsilon();
}

std::pair<float, float> find_closest_elements(const std::vector<float> &numbers) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    float num1 = sorted_numbers[0], num2 = sorted_numbers[1];
    for (size_t i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            num1 = sorted_numbers[i];
            num2 = sorted_numbers[i + 1];
        } else if (sorted_numbers[i + 1] - sorted_numbers[i] == min_diff) {
            if (sorted_numbers[i] < num1) {
                num1 = sorted_numbers[i];
                num2 = sorted_numbers[i + 1];
            }
        }
    }
    return {num1, num2};
}

int main() {
    auto result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    assert(issame(result.first, 2.2) && issame(result.second, 3.1));
}