#include <algorithm>
#include <vector>
#include <limits>

bool issame(std::vector<std::vector<float>> a, std::vector<std::vector<float>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i].size() != b[i].size()) return false;
        for (int j = 0; j < a[i].size(); ++j)
            if (std::abs(a[i][j] - b[i][j]) > 1e-5f) return false;
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> result;
    if (numbers.size() < 2) return result;

    float min_diff = std::numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j] - numbers[i]);
            if (diff < min_diff) {
                min_diff = diff;
                result = {{numbers[i], numbers[j]}};
            } else if (diff == min_diff)
                result.push_back({numbers[i], numbers[j]});
        }
    }
    
    return result;
}