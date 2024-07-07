#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    if (numbers.size() <= 1) {
        throw runtime_error("Invalid input size");
    }

    pair<float, float> closest;
    float minDiff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < minDiff) {
                minDiff = diff;
                closest = make_pair(min(diff, numbers[i]), max(diff, numbers[i]));
            }
        }
    }

    return {closest};
}