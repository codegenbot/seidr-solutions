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
// Add more test cases here
return 0;