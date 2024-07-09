```
#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

pair<bool, pair<float, float>> issame(float x1, float y1, float x2, float y2) {
    if (abs(x1 - x2) <= abs(y1 - y2)) {
        return make_pair(true, make_pair(min(x1, x2), min(y1, y2)));
    } else {
        return make_pair(false, make_pair(0, 0));
    }
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