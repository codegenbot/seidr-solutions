#include <algorithm>
#include <vector>
#include <numeric>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon())
            return false;
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.empty()) return {};
    if (numbers.size() == 1) return {numbers[0], numbers[0]};

    float min_diff = std::numeric_limits<float>::max();
    float closest_pair[2] = {-std::numeric_limits<float>::max(), -std::numeric_limits<float>::max()};

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