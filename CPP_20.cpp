#include <vector>
#include <algorithm>

bool issame(const std::pair<std::vector<float>::value_type, std::vector<float>::value_type>& a, const std::pair<std::vector<float>::value_type, std::vector<float>::value_type>& b) {
    return a == b;
}

std::pair<std::vector<float>::value_type, std::vector<float>::value_type> find_closest_elements(const std::vector<std::vector<float>::value_type>& numbers) {
    sort(numbers.begin(), numbers.end());
    std::vector<float>::value_type min_diff = numbers[1] - numbers[0];
    std::pair<std::vector<float>::value_type, std::vector<float>::value_type> result = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = {numbers[i], numbers[i + 1]};
        }
    }
    return {result.first, result.second};
}