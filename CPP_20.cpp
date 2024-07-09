#include <algorithm>
#include <limits>
#include <vector>
#include <utility>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = {min(max(numbers[i], numbers[j]), min_diff), max(min(numbers[i], numbers[j]), min_diff)};
            }
        }
    }
    
    return {closest_pair.first, closest_pair.second};
}