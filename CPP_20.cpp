Here is the completed code:

#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> closest;
    float min_diff = numeric_limits<float>::max();
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest = {{numbers[i], numbers[j]}};
            } else if (diff == min_diff) {
                closest.push_back({{numbers[i], numbers[j]}});
            }
        }
    }
    return closest;
}