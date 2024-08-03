#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::pair<float, float> find_closest_elements(const std::vector<const float>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    std::pair<float, float> closest_pair = std::make_pair(numbers[0], numbers[1]);
    float min_diff = numbers[1] - numbers[0];

    for (int i = 1; i < numbers.size() - 1; i++) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }

    return closest_pair;
}

bool issame(const std::pair<float, float>& a, const std::pair<float, float>& b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    auto result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    assert(result.first == 2.2 && result.second == 3.1);

    return 0;
}