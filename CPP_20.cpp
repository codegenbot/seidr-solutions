#include <iostream>
#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    std::pair<float, float> closest_pair = std::make_pair(numbers[0], numbers[1]);
    float min_diff = numbers[1] - numbers[0];

    for (size_t i = 1; i < numbers.size() - 1; i++) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }

    return closest_pair;
}

bool issame(const std::pair<float, float>& a, const std::pair<float, float>& b) {
    return std::abs(a.first - b.first) < 0.0001 && std::abs(a.second - b.second) < 0.0001;
}

int main() {
    auto result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    std::cout << result.first << ", " << result.second << std::endl;
    
    return 0;
}