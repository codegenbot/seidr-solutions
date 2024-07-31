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
assert(is_sorted({10, 20, 30, 40, 50}));
assert(!is_sorted({5, 3, 7, 8, 9}));
assert(is_sorted({-5, 0, 0, 1, 2}));

return 0;