#include <algorithm>
#include <vector>
#include <numeric>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    vector<pair<float, float>> pairs = {};
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j <= numbers.size() - 1; j++) {
            pairs.push_back({numbers[i], numbers[j]});
        }
    }

    float min_diff = std::numeric_limits<float>::max();
    pair<float, float> closest_pair;
    for (auto &p : pairs) {
        float diff = p.second - p.first;
        if (std::abs(diff) < std::abs(min_diff)) {
            min_diff = diff;
            closest_pair = p;
        }
    }
    return {closest_pair.first, closest_pair.second};
}