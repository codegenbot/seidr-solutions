#include <algorithm>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min(max(numbers[i], numbers[j]), min_diff), max(min(numbers[i], numbers[j]), min_diff));
            }
        }
    }
    vector<float> result;
    result.push_back((numbers[closest_pair.first] + numbers[closest_pair.second]) / 2);
    return vector<float>(1, result[0]);
}