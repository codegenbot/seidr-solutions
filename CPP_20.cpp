#include <algorithm>
#include <cmath>

double epsilon = 0.001; // precision

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > epsilon) return false;
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {};
    }

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff && std::abs(diff) <= epsilon) {
                min_diff = diff;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}