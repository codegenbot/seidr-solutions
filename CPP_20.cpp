#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    float min_diff = std::numeric_limits<float>::max();
    float closest_pair[2] = {0.0f, 0.0f};

    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
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