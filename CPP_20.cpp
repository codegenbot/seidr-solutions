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

vector<pair<float, float>> find_closest_elements(vector<vector<float>> numbers) {
    vector<pair<float, float>> result;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        pair<float, float> closest = make_pair(numbers[i][0], numbers[i][1]);
        for (int j = i + 1; j <= numbers.size() - 1; ++j) {
            if (issame(numbers[i], numbers[j])) {
                if (abs(numbers[i][0] - numbers[j][0]) < abs(closest.first - closest.second)) {
                    closest = make_pair(numbers[i][0], numbers[j][0]);
                }
            } else {
                if (abs(numbers[i][1] - numbers[j][1]) < abs(closest.first - closest.second)) {
                    closest = make_pair(numbers[i][1], numbers[j][1]);
                }
            }
        }
        result.push_back(closest);
    }
    return result;
}

int main() {
    vector<vector<float>> numbers = {{1.1, 2.2}, {3.1, 4.1}, {5.1, 6.2}};
    auto closestElements = find_closest_elements(numbers);
    for (const auto& pair : closestElements) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
}