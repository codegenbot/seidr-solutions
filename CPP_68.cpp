```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;

    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && i == 0 || arr[i - 1] % 2 != 0) {
            result.push_back({arr[i], i});
        }
    }

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
}