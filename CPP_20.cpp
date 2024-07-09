#include <vector>
#include <numeric>
#include <limits>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        throw std::invalid_argument("The vector must contain at least two elements.");
    }

    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair.first = std::min(numbers[i], numbers[j]);
                closest_pair.second = std::max(numbers[i], numbers[j]);
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}