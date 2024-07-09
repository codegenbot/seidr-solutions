#include <algorithm>
#include <vector>
#include <cmath>
#include <numeric>

bool isSame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (std::abs(v1[i] - v2[i]) > 1e-6) return false;
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {};
    }

    float min_diff = std::numeric_limits<float>::max();
    float closest_pair[2] = {0, 0};

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
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