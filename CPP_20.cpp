#include <vector>
#include <iostream>
#include <cmath>
#include <cassert>
#include <utility> // Add this header

bool issame(const std::vector<float>& a, const std::pair<float, float>& b) {
    if (a.size() != 2) return false;
    return a[0] == b.first && a[1] == b.second;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) return {0.0f, 0.0f};

    float diff = std::abs(numbers[1] - numbers[0]);
    std::pair<float, float> closest_pair = {numbers[0], numbers[1]};

    for (size_t i = 0; i < numbers.size() - 1; ++i) { // updated loop condition
        float current_diff = std::abs(numbers[i + 1] - numbers[i]);
        if (current_diff < diff) {
            diff = current_diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }

    return closest_pair;
}

int main() { // Remove the extra parentheses after "main" and add curly braces
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), {2.2f, 3.1f}));
    return 0;
}