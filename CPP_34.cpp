```cpp
#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
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
    std::vector<int> uniqueVec = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    sort(uniqueVec.begin(), uniqueVec.end());
    assert(issame(uniqueVec, {0, 2, 3, 5, 9, 123}));
}