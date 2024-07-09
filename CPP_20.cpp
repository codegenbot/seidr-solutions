#include <algorithm>
#include <vector>
#include <numeric>

bool isSame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (std::abs(v1[i] - v2[i]) > 1e-9) return false;
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    float closest_pair[2] = {0, 0};

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair[0] = numbers[i];
            closest_pair[1] = numbers[i + 1];
        }
    }

    return {closest_pair[0], closest_pair[1]};
}