#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must have at least two elements");
    }

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min(diff, numbers[i]), max(diff, numbers[j]));
            }
        }
    }

    return closest_pair;
}