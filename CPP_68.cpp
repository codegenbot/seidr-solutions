```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            pairs.push_back({arr[i], i});
        }
    }
    
    if (pairs.empty()) {
        return {};
    }
    
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    result.push_back(pairs[0].first);
    result.push_back(pairs[0].second);
    return result;
}