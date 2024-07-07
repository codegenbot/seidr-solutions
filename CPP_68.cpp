```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<pair<int, int>> nodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            nodes.emplace_back(arr[i], i);
        }
    }
    if (nodes.empty()) {
        return {};
    }
    sort(nodes.begin(), nodes.end());
    return {nodes[0].first, nodes[0].second};
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));  
}