#include <algorithm>
#include <limits>
#include <vector>

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest.first = std::min(numbers[i], numbers[j]);
                closest.second = std::max(numbers[i], numbers[j]);
            }
        }
    }

    return {closest};
}