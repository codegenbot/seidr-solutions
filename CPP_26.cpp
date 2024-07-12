```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(const std::vector<int>& arr) {
    std::vector<int> result;
    for (int i : arr) {
        if (std::find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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

int main() {
    std::vector<int> test1 = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert(issame(test1, {1, 2, 3, 4, 5}));
    return 0;
}