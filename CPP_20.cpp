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
    vector<float> temp;
    for (int i = 0; i < numbers.size(); i++) {
        for (float num : numbers[i]) {
            temp.push_back(num);
        }
    }
    sort(temp.begin(), temp.end());
    
    pair<float, float> closest = make_pair(temp[0], temp[1]);
    for (int i = 1; i < temp.size() - 1; ++i) {
        if (abs(temp[i] - temp[i + 1]) < abs(closest.first - closest.second)) {
            closest = make_pair(temp[i], temp[i + 1]);
        }
    }
    
    vector<pair<float, float>> result;
    for (int i = 0; i < numbers.size(); i++) {
        if (issame(numbers[i], {{closest.first}, {closest.second}})) {
            for (float num : numbers[i]) {
                if (num == closest.first || num == closest.second) {
                    vector<float> pair;
                    pair.push_back(num);
                    result.push_back({pair[0], pair[1]});
                }
            }
        }
    }
    
    return result;
}

int main() {
    vector<vector<float>> numbers = {{1.1, 2.2}, {3.1, 4.1}, {5.1}};
    auto closestElements = find_closest_elements(numbers);
    // Your further processing here...
}