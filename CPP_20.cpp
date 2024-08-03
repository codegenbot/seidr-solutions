#include <vector>
#include <utility>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_elements;

    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        float diff = std::abs(numbers[i] - numbers[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements.first = numbers[i];
            closest_elements.second = numbers[i + 1];
        }
    }

    return closest_elements;
}