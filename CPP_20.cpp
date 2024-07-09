#include <vector>
#include <algorithm>

bool issame(const std::pair<std::vector<float>::value_type, std::vector<float>::value_type>& pair1,
            const std::pair<std::vector<float>::value_type, std::vector<float>::value_type>& pair2) {
    return pair1 == pair2;
}

std::pair<std::vector<float>::value_type, std::vector<float>::value_type> find_closest_elements(const std::vector<std::vector<float>::value_type>& numbers) {
    std::sort(numbers.begin(), numbers.end());
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