#include <algorithm>
#include <vector>
#include <numeric>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest.first = min(max(numbers[i], numbers[j]), min(numbers[i], numbers[j]));
                closest.second = max(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }

    return {{closest}};
}