#include <algorithm>
#include <numeric>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    pair<float, float> closest;
    float minDiff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < minDiff) {
                minDiff = abs(diff);
                closest.first = numbers[i];
                closest.second = numbers[j];
            }
        }
    }

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) == minDiff) {
                result.push_back(make_pair(numbers[i], numbers[j]));
            }
        }
    }

    return result;
}