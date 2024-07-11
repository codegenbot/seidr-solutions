#include <algorithm>
#include <vector>
#include <limits>
#include <utility>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon()) return false;
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest;
    float minDiff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (std::abs(diff) < minDiff) {
                minDiff = std::abs(diff);
                closest = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return {{closest.first, closest.second}};
}