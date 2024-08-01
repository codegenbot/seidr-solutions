#include <algorithm>
#include <vector>
#include <cmath>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && all(a.begin(), a.end(), [&](float x) { 
        return std::find(b.begin(), b.end(), x) != b.end(); 
    });
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[j] - numbers[i]) < abs(closest_pair.second - closest_pair.first)) {
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }
    vector<pair<float, float>> result;
    result.push_back(closest_pair);
    return result;
}