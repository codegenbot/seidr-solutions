#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    pair<float, float> closestPair = make_pair(numbers[0], numbers[1]);
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[j] - numbers[i]) < abs(closestPair.second - closestPair.first)) {
                closestPair = make_pair(numbers[i], numbers[j]);
            }
        }
    }
    result.push_back(closestPair);
    return result;
}