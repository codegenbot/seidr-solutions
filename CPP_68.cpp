```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> pluck(const std::vector<std::vector<int>>& arr, int index) {
    return std::vector<int>(arr[index].begin(), arr[index].end());
}

int main() {
    std::vector<std::vector<int>> arr = {{7, 9, 7, 1}};
    assert(issame(pluck(arr, 0), {{7, 9, 7, 1}}));
    return 0;
}