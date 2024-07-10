#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) {
        return {};
    }
    
    float minDiff = numeric_limits<float>::max();
    pair<float, float> closestPair;
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < minDiff) {
                minDiff = diff;
                closestPair = make_pair(min(max(numbers[i], numbers[j]), min(numbers[i], numbers[j])), max(min(numbers[i], numbers[j]), max(numbers[i], numbers[j])));
            }
        }
    }
    
    return vector<float>{closestPair.first, closestPair.second};
}