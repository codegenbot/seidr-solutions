#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

std::pair<float, float> closestPair(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> pairs = {};
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j <= numbers.size() - 1; j++) {
            pairs.push_back({numbers[i], numbers[j]});
        }
    }

    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;
    for (auto &p : pairs) {
        float diff = p.second - p.first;
        if (std::abs(diff) < std::abs(min_diff)) {
            min_diff = diff;
            closest_pair = p;
        }
    }
    return {closest_pair.first, closest_pair.second};
}

int main() {
    // Your code here
    return 0;
}