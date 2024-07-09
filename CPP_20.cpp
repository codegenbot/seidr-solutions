#include <algorithm>
#include <vector>
#include <numeric>

bool isSame(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); ++i) {
        if (std::abs(vec1[i] - vec2[i]) > 1e-9) return false;
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