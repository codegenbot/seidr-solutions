#include <algorithm>
#include <limits>
#include <vector>

bool isSame(float a, float b) {
    return abs(a - b) < 1e-9;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must have at least two elements");
    }

    float min_diff = std::numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min(diff, numbers[i]), max(diff, numbers[i]));
            }
        }
    }

    vector<float> result;
    result.push_back(closest_pair.first);
    result.push_back(closest_pair.second);

    return result;
}