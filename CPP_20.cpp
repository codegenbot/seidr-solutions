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

vector<pair<float, float>> find_closest_elements(vector<vector<float>> pairs) {
    vector<pair<float, float>> closestElements;
    pair<float, float> closest = make_pair(pairs[0][0], pairs[0][1]);
    for (int i = 0; i < pairs.size() - 1; ++i) {
        if (abs(pairs[i][1] - pairs[i + 1][0]) < abs(closest.first - closest.second)) {
            closest = make_pair(pairs[i][1], pairs[i + 1][0]);
        }
    }
    return {closest};
}

int main() {
    vector<vector<float>> numbers = {{1.1, 2.2}, {3.1, 4.1}, {5.1, 6.2}};
    auto closestElements = find_closest_elements(numbers);
    // Your further processing here...
}