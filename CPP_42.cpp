```
#include <iostream>
#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

void incr_list(std::vector<int>& v, int n) {
    for (auto& x : v) {
        x += n;
    }
}

int main() {
    std::vector<int> v = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    incr_list(v, 1);
    assert(issame(v, {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}
```