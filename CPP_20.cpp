```
#include <algorithm>
#include <vector>
#include <numeric>
#include <limits>
#include <utility>

bool isSame(float a, float b) {
    return std::abs(a - b) < std::numeric_limits<float>::epsilon();
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must have at least two elements");
    }

    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff && !isSame(numbers[i], numbers[j])) {
                min_diff = diff;
                closest_pair = {std::min(numbers[i], numbers[j]), std::max(numbers[i], numbers[j])};
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}