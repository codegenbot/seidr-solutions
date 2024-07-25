```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<pair<int, int>> pairs;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            pairs.push_back({arr[i], i});
        }
    }
    
    if (pairs.empty()) {
        return {};
    }
    
    sort(pairs.begin(), pairs.end());
    return {pairs[0].first, pairs[0].second};
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    // Your other code...
}