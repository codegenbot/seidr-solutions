#include <vector>
#include <utility>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_elements;

    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_elements.first = numbers[i];
                closest_elements.second = numbers[j];
            }
        }
    }

    return closest_elements;
}