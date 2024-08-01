#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>
#include <limits>
#include <stdexcept>

bool isSame(float a, float b) {
    if (std::abs(a - b) < std::numeric_limits<float>::epsilon())
        return true;
    else
        return false;
}

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) {
        throw runtime_error("Vector must have at least two elements");
    }

    float min_diff = numeric_limits<float>::max();
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
    if (!isSame(closest_pair.first, closest_pair.second)) {
        if (closest_pair.first > closest_pair.second)
            result.push_back(closest_pair.second);
        else
            result.push_back(closest_pair.first);
        result.push_back(closest_pair.first);
    } else {
        for (float num : numbers) {
            if (std::abs(num - closest_pair.first) <= std::numeric_limits<float>::epsilon())
                result.push_back(num);
        }
    }

    return result;
}