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

vector<pair<float, float>> find_closest_elements(vector<vector<float>>& numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest = make_pair(numbers[0][0], numbers[0][1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i][0] - numbers[i + 1][0]) < abs(closest.first - closest.second)) {
            closest = make_pair(numbers[i][0], numbers[i + 1][0]);
        }
    }
    return {{closest.first, closest.second}};
}

int main() {
    vector<vector<float>> numbers = {{1.1, 2.2}, {3.1, 4.1}, {5.1, 6.1}};
    auto closestElements = find_closest_elements(numbers);
    // Your further processing here...
}