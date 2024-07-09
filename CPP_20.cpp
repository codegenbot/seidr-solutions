#include <algorithm>
#include <limits>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest;
    float min_diff = numeric_limits<float>::max();
    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest};
}