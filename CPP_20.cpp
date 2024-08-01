#include <algorithm>
#include <limits>
#include <vector>
#include <utility>

bool isSame(float a, float b) {
    return abs(a - b) < 1e-9;
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
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = std::make_pair(min(diff, numbers[i]), max(diff, numbers[i]));
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}