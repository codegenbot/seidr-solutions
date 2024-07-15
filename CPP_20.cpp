#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::pair<float, float>& a, const std::pair<float, float>& b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    std::pair<float, float> result = std::make_pair(sorted_numbers[0], sorted_numbers[1]);
    for (int i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            result = std::make_pair(sorted_numbers[i], sorted_numbers[i + 1]);
        }
    }
    return result;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), std::make_pair(2.2f, 3.1f)));
    return 0;
}