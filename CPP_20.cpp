#include <vector>
#include <numeric>
#include <limits>

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1) return {};

    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = {{std::min(numbers[i], numbers[j]), std::max(numbers[i], numbers[j])}};
            }
        }
    }

    return {closest_pair};
}