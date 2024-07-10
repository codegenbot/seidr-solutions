#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    float minDiff = std::numeric_limits<float>::max();
    float closestPairFirst = 0;
    float closestPairSecond = 0;

    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < minDiff) {
                minDiff = diff;
                closestPairFirst = numbers[i];
                closestPairSecond = numbers[j];
            }
        }
    }

    return {closestPairFirst, closestPairSecond};
}