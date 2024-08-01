#include <algorithm>
#include <numeric>
#include <limits>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    pair<float, float> closest;

    if (numbers.size() < 2) {
        return result;
    }

    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }

    result.push_back(closest);

    return result;
}