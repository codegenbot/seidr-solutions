```
#include <iostream>
#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> incr_list(const std::vector<int>& v) {
    std::vector<int> result;
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it % 2 == 0) {
            result.push_back(*it);
        }
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