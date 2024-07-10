#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    vector<float> closest;
    float min_diff = numeric_limits<float>::max();
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < abs(min_diff)) {
                min_diff = diff;
                closest = {numbers[i], numbers[j]};
            }
        }
    }
    return closest;
}