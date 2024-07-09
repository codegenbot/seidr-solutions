#include <vector>
#include <limits>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    float min_diff = std::numeric_limits<float>::max();
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < threshold && diff < min_diff) {
                min_diff = diff;
            }
        }
    }
    return min_diff < threshold;
}