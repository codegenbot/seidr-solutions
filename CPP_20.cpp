```cpp
#include <numeric>
#include <algorithm>
#include <cmath>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;

}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> closestPair;
    float minDiff = std::numeric_limits<float>::max();
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < minDiff) {
                minDiff = diff;
                closestPair = {{numbers[i], numbers[j]}};
            } else if (diff == minDiff) {
                closestPair.push_back({{numbers[i], numbers[j]}});
            }
        }
    }
    return closestPair[0];
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    
}