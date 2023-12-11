```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> incr_list(std::vector<int> v) {
    std::vector<int> result;
    for (int i = 0; i < v.size(); i++) {
        result.push_back(v[i] + 1);
    }
    return result;
}

int main() {
    std::vector<int> v1 = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> v2 = incr_list(v1);
    assert(issame(v1, v2));
    return 0;
}
```