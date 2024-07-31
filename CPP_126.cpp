#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool is_sorted(const std::vector<int>& lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1] || std::count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

assert(is_sorted({1, 2, 3, 4}));
assert(is_sorted({-5, 0, 5, 10}));
assert(is_sorted({100, 200, 300, 400}));
assert(is_sorted({5, 5, 7, 10}));
assert(!is_sorted({3, 2, 1, 0}));

return 0;