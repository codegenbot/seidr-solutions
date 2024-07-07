```cpp
#include <algorithm>
#include <vector>
#include <utility>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6) { 
            return false;
        }
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < abs(closest.first - closest.second)) {
            closest = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest};
}

int main() {
    vector<float> numbers = {1.1, 2.2, 3.1, 4.1, 5.1};
    auto closestElements = find_closest_elements(numbers);
    // Your further processing here...
}