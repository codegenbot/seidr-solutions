#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> closestPairs;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float minDiff = numeric_limits<float>::max();
        pair<float, float> closestPair;
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < minDiff) {
                minDiff = diff;
                closestPair = make_pair(minimals(numbers[i], numbers[j]), max_of_two(numbers[i], numbers[j]));
            }
        }
        closestPairs.push_back(closestPair);
    }
    return closestPairs;
}

pair<float, float> find_closest_elements(vector<pair<float, float>> numbers) {
    pair<float, float> closestPair = *min_element(numbers.begin(), numbers.end(),
        [](const pair<float, float>& a, const pair<float, float>& b) {
            return abs(a.first - a.second) < abs(b.first - b.second);
        });
    return closestPair;
}