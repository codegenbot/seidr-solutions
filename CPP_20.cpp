#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<vector<float>> find_closest_elements(vector<vector<float>>& numbers) {
    if (!issame(numbers[0], numbers[1])) {
        throw runtime_error("Input vectors must be of the same size");
    }

    vector<float> flat_numbers;
    for (const auto& num : numbers) {
        flat_numbers.insert(flat_numbers.end(), num.begin(), num.end());
    }

    sort(flat_numbers.begin(), flat_numbers.end());

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < flat_numbers.size() - 1; ++i) {
        float diff = flat_numbers[i + 1] - flat_numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair.first = flat_numbers[i];
            closest_pair.second = flat_numbers[i + 1];
        }
    }

    vector<vector<float>> result;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i].size() > 1 && numbers[i][0] == closest_pair.first) {
            result.push_back({closest_pair.first});
        } else if (numbers[i].size() > 1 && numbers[i][0] == closest_pair.second) {
            result.push_back({closest_pair.second});
        } else {
            for (const auto& num : numbers[i]) {
                if (abs(num - closest_pair.first) < min_diff || abs(num - closest_pair.second) < min_diff) {
                    result.push_back({num});
                }
            }
        }
    }

    return result;
}