Here is the completed code:

#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i+1]) < abs(closest.first - closest.second)) {
            closest = make_pair(numbers[i], numbers[i+1]);
        }
    }
    return {closest};
}