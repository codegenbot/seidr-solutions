#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    int n = numbers.size();
    if (n < 2) {
        return {};
    }
    pair<float, float> closest_pair;
    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair.first = numbers[i];
                closest_pair.second = numbers[j];
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}