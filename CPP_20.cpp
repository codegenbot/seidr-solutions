#include <algorithm>
#include <vector>
#include <cmath>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); ++i)
        if(std::abs(v1[i] - v2[i]) > 1e-6f) return false;
    return true;
}

std::vector<float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() <= 1) {
        return {};
    }

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair.first = numbers[i];
                closest_pair.second = numbers[j];
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}