#include <algorithm>
#include <vector>
#include <limits>

bool issame(float a, float b) {
    return abs(a - b) < numeric_limits<float>::epsilon();
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest_pair;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (!issame(numbers[i], numbers[j])) {
                float diff = std::abs(numbers[j] - numbers[i]);
                if (diff < min_diff) {
                    min_diff = diff;
                    closest_pair = std::make_pair(numbers[i], numbers[j]);
                }
            }
        }
    }

    return {{closest_pair}};
}