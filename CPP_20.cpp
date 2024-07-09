#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    std::pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();
    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest};
}