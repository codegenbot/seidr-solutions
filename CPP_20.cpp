#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() <= 1)
        return {};

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min(max(numbers[i], numbers[j]), min_diff), max(min(numbers[i], numbers[j]), min_diff));
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}