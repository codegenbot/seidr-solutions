```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your logic to check if vectors are same
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> evenNodes;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }

    if (evenNodes.empty()) {
        return {};
    } else {
        std::sort(evenNodes.begin(), evenNodes.end());
        return {evenNodes[0]};
    }
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}