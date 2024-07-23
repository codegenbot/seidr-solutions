#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<int>& mixedVector) {
    std::vector<int> result;
    for (int num : mixedVector) {
        if (std::is_same_v<decltype(num), int>) {
            result.push_back(num);
        }
    }
    return result;
}

assert(is_same(filter_integers({3, 3, 3}), {3, 3, 3}));
```