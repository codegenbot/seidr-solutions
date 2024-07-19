#include <algorithm>
#include <numeric>
#include <vector>
#include <utility>
#include <initializer_list>
#include <limits>
#include <cassert>

pair<float, float> find_closest_elements(vector<float> numbers);

bool issame(vector<float> a, vector<float> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

pair<float, float> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest;
    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[j] - numbers[i]);
            if (diff < min_diff) {
                min_diff = diff;
                closest = pair<float, float>(numbers[i], numbers[j]);
            }
        }
    }

    return closest;
}

int main_check() {
    vector<float> numbers = {1.1, 2.2, 3.1, 4.1, 5.1};
    pair<float, float> result = find_closest_elements(numbers);
    
    if (result.first == 2.2 && result.second == 3.1) {
        return 0;
    } else {
        return 1;
    }
}