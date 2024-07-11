#include <algorithm>
#include <vector>

bool issame(const std::pair<float, float>& p1, const std::pair<float, float>& p2) {
    return std::abs(p1.first - p1.second) == std::abs(p2.first - p2.second);
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1)
        return {};

    float min_diff = std::numeric_limits<float>::max();
    float closest_pair[2];

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = std::abs(numbers[i] - numbers[j]);
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }

    return {{closest_pair[0], closest_pair[1]}};
}