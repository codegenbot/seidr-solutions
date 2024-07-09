```
#include <algorithm>
#include <vector>
#include <limits>
#include <utility>

bool issame(vector<vector<float>> a, vector<vector<float>> b) {
    return std::all_of(a.begin(), a.end(), [&](const auto &v) { return v == b[0]; });
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j] - numbers[i]);
            if (diff < min_diff) {
                min_diff = diff;
                closest = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    vector<pair<float, float>> result;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j] - numbers[i]);
            if (diff == min_diff) {
                result.push_back(std::make_pair(numbers[i], numbers[j]));
            }
        }
    }
    
    return result;
}