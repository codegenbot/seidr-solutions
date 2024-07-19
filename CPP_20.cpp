```cpp
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>

namespace std {}

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
                closest = make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return closest;
}

int main() {
    vector<float> numbers = {1.1, 2.2, 3.1, 4.1, 5.1};
    pair<float, float> result = find_closest_elements(numbers);
    
    if (result.first == 2.2 && result.second == 3.1) {
        return 0;
    } else {
        return 1;
    }
}