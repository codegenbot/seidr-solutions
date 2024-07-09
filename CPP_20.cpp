#include <algorithm>
#include <vector>
#include <limits>
#include <numeric>

bool issame(std::vector<std::vector<float>> a, std::vector<std::vector<float>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
        for (int j = 0; j < a[i].size(); ++j) {
            if (std::abs(a[i][j] - b[i][j]) > std::numeric_limits<float>::epsilon()) {
                return false;
            }
        }
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (std::abs(diff) < min_diff) {
                min_diff = std::abs(diff);
                closest = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    return {closest};
}