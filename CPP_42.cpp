```
#include <iostream>
#include <algorithm>
#include <vector>

bool issame(a, b) {
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
```