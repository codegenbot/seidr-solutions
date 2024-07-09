#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

pair<bool, bool> issame(float a, float b) {
    pair<bool, bool> res;
    if (a == b) {
        res.first = true;
        res.second = true;
    } else {
        res.first = false;
        res.second = false;
    }
    return res;
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }

    return vector<float>(closest_pair.begin(), closest_pair.end());
}