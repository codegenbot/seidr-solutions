```
#include <iostream>
#include <algorithm>
#include <vector>

bool is_same(int a, int b) {
    return a == b;
}

void incr_list(const std::vector<int>& v) {
    for (auto& x : v) {
        x++;
    }
}

int main() {
    std::vector<int> v = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    incr_list(v);
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it % 2 == 0) {
            std::cout << *it << " ";
        }
    }
    return 0;
}
```