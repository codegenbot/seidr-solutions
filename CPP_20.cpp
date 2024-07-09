```
#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>

bool issame(float x, float y) {
    if (std::abs(x - y) <= 1e-6)
        return true;
    return false;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> closest_pairs;
    std::pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (!issame(numbers[j], numbers[i]) && std::abs(numbers[j] - numbers[i]) < std::abs(closest_pair.second - closest_pair.first)) {
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }

    return {closest_pair};
}