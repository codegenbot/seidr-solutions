#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>

bool issame(float x1, float x2) {
    return std::abs(x1 - x2) <= 0.00001;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {};
    }

    float min_diff = std::numeric_limits<float>::max();
    float closest_pair[2] = {0, 0};

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (issame(numbers[i], numbers[j])) {
                continue;
            }
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }

    return {closest_pair[0], closest_pair[1]};
}