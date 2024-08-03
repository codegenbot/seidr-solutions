#include <algorithm>
#include <vector>
#include <utility>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> result;
    if (numbers.size() < 2) {
        result.push_back({numbers[0], numbers[0]});
        return result;
    }

    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    float min_diff = abs(numbers[1] - numbers[0]);

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = abs(numbers[j] - numbers[i]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair.first = numbers[i];
                closest_pair.second = numbers[j];
            }
        }
    }

    result.push_back(closest_pair);
    return result;
}