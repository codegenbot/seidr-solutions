```
#include <vector>
#include <numeric>
#include <limits>
#include <utility>

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
                closest_pair = std::make_pair(std::min(numbers[i], numbers[j]), std::max(numbers[i], numbers[j]));
            }
        }
    }

    return std::vector<float>{closest_pair.first, closest_pair.second};
}