#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    vector<float> closest_pair;
    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair.clear();
            closest_pair.push_back(numbers[i]);
            closest_pair.push_back(numbers[i + 1]);
        }
    }
    return closest_pair;
}