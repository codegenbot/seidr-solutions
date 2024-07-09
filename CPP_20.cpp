Here is the completed code:

#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    vector<pair<float, float>> closest;
    pair<float, float> closest_pair = {numbers[0], numbers[1]};
    for (int i = 0; i < numbers.size() - 1; i++) {
        if (abs(numbers[i] - numbers[i + 1]) < abs(closest_pair.first - closest_pair.second)) {
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    return {closest_pair};
}