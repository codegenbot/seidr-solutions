#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float minDiff = numeric_limits<float>::max();
    pair<float, float> closestPair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestPair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return vector<float>(closestPair.begin(), closestPair.end());
}