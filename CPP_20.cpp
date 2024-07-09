#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    int n = numbers.size();
    sort(numbers.begin(), numbers.end());
    
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 1; i < n; ++i) {
        float diff = numbers[i] - numbers[i-1];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair.first = numbers[i-1];
            closest_pair.second = numbers[i];
        }
    }

    return {closest_pair.first, closest_pair.second};
}