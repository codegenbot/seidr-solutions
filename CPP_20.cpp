#include <algorithm>
#include <vector>
#include <limits>
#include <utility>

bool issame(vector<vector<float>> a, vector<vector<float>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (!std::equal(a[i].begin(), a[i].end(), b[i].begin())) return false;
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest;
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
    
    return {{closest.first, closest.second}};
}