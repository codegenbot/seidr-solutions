#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    vector<pair<float, float>> closest;
    float min_diff = numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest = {{numbers[i], numbers[i + 1]}};
        } else if (diff == min_diff) {
            closest.push_back({{numbers[i], numbers[i + 1]}});
        }
    }
    
    return closest;
}