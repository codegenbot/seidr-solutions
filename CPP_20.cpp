#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j <= numbers.size() - 1; ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min(max(numbers[i], numbers[j]), max(min(numbers[i], numbers[j]), minDiff)), min(min(numbers[i], numbers[j]), minDiff));
            }
        }
    }

    return {closest_pair};
}