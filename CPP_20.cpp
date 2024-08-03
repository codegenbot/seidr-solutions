#include <vector>
#include <utility>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        return {0.0f, 0.0f};
    }

    float minDiff = std::abs(numbers[0] - numbers[1]);
    std::pair<float, float> closestPair = {numbers[0], numbers[1]};

    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            float currDiff = std::abs(numbers[i] - numbers[j]);
            if (currDiff < minDiff) {
                minDiff = currDiff;
                closestPair = {numbers[i], numbers[j]};
            }
        }
    }

    return closestPair;
}