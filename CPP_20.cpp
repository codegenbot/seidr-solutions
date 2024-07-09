```
#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>

bool issame(float a, float b) {
    if (abs(a - b) <= 1e-9) {
        return true;
    }
    return false;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> closest_pairs;
    std::pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (!issame(numbers[j], numbers[i]) && abs(numbers[j] - numbers[i]) < abs(closest_pair.second - closest_pair.first)) {
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }

    return {closest_pair};
}