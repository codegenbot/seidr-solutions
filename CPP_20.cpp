#include <algorithm>
#include <vector>
#include <limits>

std::bool issame(std::pair<float, float> p1, std::pair<float, float> p2) {
    for (int i = 0; i < 2; ++i) {
        if (p1.first != p2.first || p1.second != p2.second)
            return false;
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest_pair;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (std::abs(diff) < min_diff && !issame(closest_pair, std::make_pair(numbers[i], numbers[j]))) {
                min_diff = std::abs(diff);
                closest_pair = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return std::vector<std::pair<float, float>>({closest_pair});
}