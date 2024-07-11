```
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest;
    float minDiff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < minDiff) {
                minDiff = abs(diff);
                closest = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }

    std::vector<std::pair<float, float>> result;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[j] - numbers[i]) == minDiff) {
                result.push_back(std::make_pair(numbers[i], numbers[j]));
            }
        }
    }

    return result;
}