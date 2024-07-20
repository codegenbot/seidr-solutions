#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() <= 1)
        throw runtime_error("Vector must have at least two elements");

    vector<pair<float, float>> pairs;
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            pairs.push_back({numbers[i], numbers[j]});
        }
    }

    sort(pairs.begin(), pairs.end(),
         [](const pair<float, float>& a, const pair<float, float>& b) {
             return abs(a.first - a.second) <
                    abs(b.first - b.second);
         });

    return {pairs[0].first, pairs[0].second};
}